#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from thrift.py3.reflection cimport (
  MethodSpec as __MethodSpec,
  ArgumentSpec as __ArgumentSpec,
  NumberType as __NumberType,
)

import folly.iobuf as __iobuf


cimport my.namespacing.test.module.module.types as _my_namespacing_test_module_module_types


cdef __InterfaceSpec get_reflection__TestService(bint for_clients):
    cdef __InterfaceSpec spec = __InterfaceSpec.create(
        name="TestService",
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.create(
            name="init",
            arguments=(
                __ArgumentSpec.create(
                    name="int1",
                    type=int,
                    kind=__NumberType.I64,
                    annotations={
                    },
                ),
            ),
            result=int,
            result_kind=__NumberType.I64,
            exceptions=(
            ),
            annotations={
            },
        )
    )
    return spec
