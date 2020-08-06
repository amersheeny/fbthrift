/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/conformance/cpp2/Protocol.h>

#include <algorithm>

#include <folly/lang/Exception.h>

namespace apache::thrift::conformance {

Protocol createProtocol(StandardProtocol protocol) noexcept {
  Protocol result;
  result.set_standard(protocol);
  return result;
}

Protocol createProtocol(std::string name) noexcept {
  StandardProtocol standard;
  if (apache::thrift::TEnumTraits<StandardProtocol>::findValue(
          name.c_str(), &standard)) {
    return createProtocol(standard);
  }

  Protocol result;
  result.set_custom(std::move(name));
  return result;
}

void normalizeProtocol(Protocol* protocol) noexcept {
  if (protocol->getType() == Protocol::custom) {
    StandardProtocol standard;
    if (apache::thrift::TEnumTraits<StandardProtocol>::findValue(
            protocol->get_custom().c_str(), &standard)) {
      protocol->set_standard(standard);
    }
  }
}

std::string_view getProtocolName(const Protocol& protocol) {
  switch (protocol.getType()) {
    case Protocol::__EMPTY__:
      return {};
    case Protocol::standard:
      return apache::thrift::TEnumTraits<StandardProtocol>::findName(
          protocol.get_standard());
    case Protocol::custom:
      return protocol.get_custom();
  };
}

auto ProtocolIdManager::getId(const Protocol& protocol) const noexcept
    -> id_type {
  switch (protocol.getType()) {
    case Protocol::__EMPTY__:
      return kNoId;
    case Protocol::standard:
      return getStandardId(protocol.get_standard());
    case Protocol::custom:
      if (auto itr = std::find(
              customProtocols_.begin(),
              customProtocols_.end(),
              protocol.get_custom());
          itr != customProtocols_.end()) {
        return getCustomId(itr);
      }
      // Check if it is actually a standard protocol.
      return getStandardId(protocol.get_custom());
  }
}

auto ProtocolIdManager::getOrCreateId(const Protocol& protocol) -> id_type {
  switch (protocol.getType()) {
    case Protocol::__EMPTY__:
      folly::throw_exception(std::invalid_argument("Empty protocol"));
    case Protocol::standard:
      return static_cast<id_type>(protocol.get_standard());
    case Protocol::custom:
      if (auto itr = std::find(
              customProtocols_.begin(),
              customProtocols_.end(),
              protocol.get_custom());
          itr != customProtocols_.end()) {
        return getCustomId(itr);
      }
      // Check if it is actually a standard protocol before adding a new custom
      // one.
      if (auto id = getStandardId(protocol.get_custom()); id != kNoId) {
        return id;
      }
      customProtocols_.emplace_back(protocol.get_custom());
      return getCustomId(customProtocols_.size());
  }
}

auto ProtocolIdManager::getStandardId(StandardProtocol protocol) noexcept
    -> id_type {
  // Use the enum values.
  return static_cast<id_type>(protocol);
}

auto ProtocolIdManager::getCustomId(size_t num) noexcept -> id_type {
  // Counts down from max value.
  return static_cast<id_type>(-num);
}

auto ProtocolIdManager::getCustomId(
    const std::vector<std::string>::const_iterator& itr) const noexcept
    -> id_type {
  return getCustomId(itr - customProtocols_.begin() + 1);
}

auto ProtocolIdManager::getStandardId(const std::string& name) noexcept
    -> id_type {
  StandardProtocol protocol;
  if (apache::thrift::TEnumTraits<StandardProtocol>::findValue(
          name.c_str(), &protocol)) {
    return getStandardId(protocol);
  }
  return kNoId;
}

} // namespace apache::thrift::conformance
