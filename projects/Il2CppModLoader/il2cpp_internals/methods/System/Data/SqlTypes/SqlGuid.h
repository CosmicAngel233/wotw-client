#include <interception_macros.h>

namespace app::methods::System::Data::SqlTypes::SqlGuid {
    IL2CPP_REGISTER_METHOD(0x00120B90, void, __ctor_1, (app::SqlGuid__Boxed * this_ptr, bool f_null));
    IL2CPP_REGISTER_METHOD(0x001E4080, void, __ctor_2, (app::SqlGuid__Boxed * this_ptr, app::Byte__Array * value));
    IL2CPP_REGISTER_METHODINFO(0x0472C9F8, SqlGuid__ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E4090, void, __ctor_3, (app::SqlGuid__Boxed * this_ptr, app::Guid g));
    IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsNull, (app::SqlGuid__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E40C0, app::Guid, get_Value, (app::SqlGuid__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473B298, SqlGuid_get_Value__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022B00A0, app::SqlGuid, op_Implicit, (app::Guid x));
    IL2CPP_REGISTER_METHOD(0x001E40F0, app::String *, ToString, (app::SqlGuid__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022B00C0, app::EComparison__Enum, Compare, (app::SqlGuid x, app::SqlGuid y));
    IL2CPP_REGISTER_METHOD(0x022B0260, app::SqlGuid, op_Explicit, (app::SqlBinary x));
    IL2CPP_REGISTER_METHOD(0x022B0350, app::SqlBoolean, op_Equality, (app::SqlGuid x, app::SqlGuid y));
    IL2CPP_REGISTER_METHOD(0x022B0450, app::SqlBoolean, op_LessThan, (app::SqlGuid x, app::SqlGuid y));
    IL2CPP_REGISTER_METHOD(0x022B0550, app::SqlBoolean, op_GreaterThan, (app::SqlGuid x, app::SqlGuid y));
    IL2CPP_REGISTER_METHOD(0x001E41A0, int32_t, CompareTo_1, (app::SqlGuid__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04788C10, SqlGuid_CompareTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x001E41B0, int32_t, CompareTo_2, (app::SqlGuid__Boxed * this_ptr, app::SqlGuid value));
    IL2CPP_REGISTER_METHOD(0x001E41C0, bool, Equals, (app::SqlGuid__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x001E41D0, int32_t, GetHashCode, (app::SqlGuid__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::XmlSchema *, IXmlSerializable_GetSchema, (app::SqlGuid__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x001E42E0, void, IXmlSerializable_ReadXml, (app::SqlGuid__Boxed * this_ptr, app::XmlReader * reader));
    IL2CPP_REGISTER_METHOD(0x001E4430, void, IXmlSerializable_WriteXml, (app::SqlGuid__Boxed * this_ptr, app::XmlWriter * writer));
    IL2CPP_REGISTER_METHOD(0x022B0E20, app::XmlQualifiedName *, GetXsdType, (app::XmlSchemaSet * schema_set));
    IL2CPP_REGISTER_METHOD(0x022B0F70, void, __cctor, ());
    app::SqlBoolean operator == (app::SqlGuid x, app::SqlGuid y) {
        return op_Equality(x, y);
    }
    app::SqlBoolean operator < (app::SqlGuid x, app::SqlGuid y) {
        return op_LessThan(x, y);
    }
    app::SqlBoolean operator > (app::SqlGuid x, app::SqlGuid y) {
        return op_GreaterThan(x, y);
    }
}