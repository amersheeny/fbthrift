#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as __iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)


cimport includes.types as _includes_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__AStruct():
    cdef _includes_types.AStruct defaults = _includes_types.AStruct.create(
        constant_shared_ptr[_includes_types.cAStruct](
            default_inst[_includes_types.cAStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="AStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec.create(
            name="FieldA",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__AStructB():
    cdef _includes_types.AStructB defaults = _includes_types.AStructB.create(
        constant_shared_ptr[_includes_types.cAStructB](
            default_inst[_includes_types.cAStructB]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="AStructB",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec.create(
            name="FieldA",
            type=_includes_types.AStruct,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
                """cpp2.ref_type""": """shared_const""",            },
        ),
    )
    return spec
