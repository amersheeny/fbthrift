/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/no_metadata/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>

namespace cpp2 {

} // cpp2
namespace std {

} // std


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::MyDataItem> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::MyStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::MyUnion> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void MyDataItem::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyDataItem>>();
  }

  switch (_readState.fieldId) {
    default:
    {
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyDataItem::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyDataItem");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyDataItem::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyDataItem");
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyDataItem::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyDataItem");
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyDataItem::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyDataItem::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyDataItem::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyDataItem::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyDataItem::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyDataItem::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void MyStruct::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_MyIntField:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::readWithContext(*iprot, this->MyIntField, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.MyIntField = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_MyStringField:
  {
    
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::readWithContext(*iprot, this->MyStringField, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.MyStringField = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_MyDataField:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyDataItem>::readWithContext(*iprot, this->MyDataField, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.MyDataField = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
    _readState.afterSubobject(iprot);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_myEnum:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnum>::readWithContext(*iprot, this->myEnum, _readState);
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.myEnum = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_MyIntField;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_MyStringField;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_MyDataField;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_myEnum;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  xfer += prot_->serializedFieldSize("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::serializedSize<false>(*prot_, this->MyIntField);
  xfer += prot_->serializedFieldSize("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->MyStringField);
  xfer += prot_->serializedFieldSize("MyDataField", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyDataItem>::serializedSize<false>(*prot_, this->MyDataField);
  xfer += prot_->serializedFieldSize("myEnum", apache::thrift::protocol::T_I32, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnum>::serializedSize<false>(*prot_, this->myEnum);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  xfer += prot_->serializedFieldSize("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::serializedSize<false>(*prot_, this->MyIntField);
  xfer += prot_->serializedFieldSize("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::serializedSize<false>(*prot_, this->MyStringField);
  xfer += prot_->serializedFieldSize("MyDataField", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyDataItem>::serializedSize<true>(*prot_, this->MyDataField);
  xfer += prot_->serializedFieldSize("myEnum", apache::thrift::protocol::T_I32, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnum>::serializedSize<false>(*prot_, this->myEnum);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  xfer += prot_->writeFieldBegin("MyIntField", apache::thrift::protocol::T_I64, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::write(*prot_, this->MyIntField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("MyStringField", apache::thrift::protocol::T_STRING, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::string, ::std::string>::write(*prot_, this->MyStringField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("MyDataField", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyDataItem>::write(*prot_, this->MyDataField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("myEnum", apache::thrift::protocol::T_I32, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnum>::write(*prot_, this->myEnum);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace cpp2 {

template <class Protocol_>
void MyUnion::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;
  _readState.fieldId = 0;

  _readState.readStructBegin(iprot);

  _readState.readFieldBegin(iprot);
  if (_readState.atStop()) {
    this->__clear();
  } else {
    if (iprot->kUsesFieldNames()) {
      _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyUnion>>();
    }
    switch (_readState.fieldId) {
      case 1:
      {
        if (_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32)) {
          this->set_myEnum();
          ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnum>::readWithContext(*iprot, this->mutable_myEnum(), _readState);
        } else {
          _readState.skip(iprot);
        }
        break;
      }
      case 2:
      {
        if (_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT)) {
          this->set_myStruct();
          _readState.beforeSubobject(iprot);
          ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyStruct>::readWithContext(*iprot, this->mutable_myStruct(), _readState);
          _readState.afterSubobject(iprot);
        } else {
          _readState.skip(iprot);
        }
        break;
      }
      case 3:
      {
        if (_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT)) {
          this->set_myDataItem();
          _readState.beforeSubobject(iprot);
          ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyDataItem>::readWithContext(*iprot, this->mutable_myDataItem(), _readState);
          _readState.afterSubobject(iprot);
        } else {
          _readState.skip(iprot);
        }
        break;
      }
      default:
      {
        _readState.skip(iprot);
        break;
      }
    }
    _readState.readFieldEnd(iprot);
    _readState.readFieldBegin(iprot);
    if (UNLIKELY(!_readState.atStop())) {
      using apache::thrift::protocol::TProtocolException;
      TProtocolException::throwUnionMissingStop();
    }
  }
  _readState.readStructEnd(iprot);
}
template <class Protocol_>
uint32_t MyUnion::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myEnum:
    {
      xfer += prot_->serializedFieldSize("myEnum", apache::thrift::protocol::T_I32, 1);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnum>::serializedSize<false>(*prot_, this->get_myEnum());
      break;
    }
    case MyUnion::Type::myStruct:
    {
      xfer += prot_->serializedFieldSize("myStruct", apache::thrift::protocol::T_STRUCT, 2);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyStruct>::serializedSize<false>(*prot_, this->get_myStruct());
      break;
    }
    case MyUnion::Type::myDataItem:
    {
      xfer += prot_->serializedFieldSize("myDataItem", apache::thrift::protocol::T_STRUCT, 3);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyDataItem>::serializedSize<false>(*prot_, this->get_myDataItem());
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myEnum:
    {
      xfer += prot_->serializedFieldSize("myEnum", apache::thrift::protocol::T_I32, 1);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnum>::serializedSize<false>(*prot_, this->get_myEnum());
      break;
    }
    case MyUnion::Type::myStruct:
    {
      xfer += prot_->serializedFieldSize("myStruct", apache::thrift::protocol::T_STRUCT, 2);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyStruct>::serializedSize<true>(*prot_, this->get_myStruct());
      break;
    }
    case MyUnion::Type::myDataItem:
    {
      xfer += prot_->serializedFieldSize("myDataItem", apache::thrift::protocol::T_STRUCT, 3);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyDataItem>::serializedSize<true>(*prot_, this->get_myDataItem());
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyUnion::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyUnion");
  switch(this->getType()) {
    case MyUnion::Type::myEnum:
    {
      xfer += prot_->writeFieldBegin("myEnum", apache::thrift::protocol::T_I32, 1);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::MyEnum>::write(*prot_, this->get_myEnum());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case MyUnion::Type::myStruct:
    {
      xfer += prot_->writeFieldBegin("myStruct", apache::thrift::protocol::T_STRUCT, 2);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyStruct>::write(*prot_, this->get_myStruct());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case MyUnion::Type::myDataItem:
    {
      xfer += prot_->writeFieldBegin("myDataItem", apache::thrift::protocol::T_STRUCT, 3);
      xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::structure,  ::cpp2::MyDataItem>::write(*prot_, this->get_myDataItem());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case MyUnion::Type::__EMPTY__:;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
