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


cimport module.types as _module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__Banal():
    cdef _module_types.Banal defaults = _module_types.Banal.create(
        constant_shared_ptr[_module_types.cBanal](
            default_inst[_module_types.cBanal]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="Banal",
        kind=__StructType.EXCEPTION,
        annotations={
        },
    )
    return spec
cdef __StructSpec get_reflection__Fiery():
    cdef _module_types.Fiery defaults = _module_types.Fiery.create(
        constant_shared_ptr[_module_types.cFiery](
            default_inst[_module_types.cFiery]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="Fiery",
        kind=__StructType.EXCEPTION,
        annotations={
            """message""": """message""",        },
    )
    spec.add_field(
        __FieldSpec.create(
            name="message",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.REQUIRED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__Serious():
    cdef _module_types.Serious defaults = _module_types.Serious.create(
        constant_shared_ptr[_module_types.cSerious](
            default_inst[_module_types.cSerious]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="Serious",
        kind=__StructType.EXCEPTION,
        annotations={
            """message""": """sonnet""",        },
    )
    spec.add_field(
        __FieldSpec.create(
            name="sonnet",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    return spec
