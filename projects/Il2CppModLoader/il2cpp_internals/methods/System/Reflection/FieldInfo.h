#include <interception_macros.h>

namespace app::methods::System::Reflection::FieldInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::MemberTypes__Enum, get_MemberType, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268A3D0, bool, get_IsLiteral, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268A3F0, bool, get_IsStatic, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268A410, bool, get_IsInitOnly, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268A430, bool, get_IsPublic, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268A460, bool, get_IsPrivate, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268A480, bool, get_IsNotSerialized, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268A4A0, void, SetValue, (app::FieldInfo_1 * this_ptr, app::Object * obj, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0268A4D0, app::FieldInfo_1 *, internal_from_handle_type, (void * field_handle, void * type_handle));
    IL2CPP_REGISTER_METHOD(0x0268A530, app::FieldInfo_1 *, GetFieldFromHandle_1, (app::RuntimeFieldHandle handle));
    IL2CPP_REGISTER_METHODINFO(0x04788BB8, FieldInfo_1_GetFieldFromHandle__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0268A5F0, app::FieldInfo_1 *, GetFieldFromHandle_2, (app::RuntimeFieldHandle handle, app::RuntimeTypeHandle declaring_type));
    IL2CPP_REGISTER_METHODINFO(0x0475B130, FieldInfo_1_GetFieldFromHandle_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0268A720, int32_t, GetFieldOffset, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04743C78, FieldInfo_1_GetFieldOffset__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0268A780, void, SetValueDirect, (app::FieldInfo_1 * this_ptr, app::TypedReference obj, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04719C70, FieldInfo_1_SetValueDirect__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MarshalAsAttribute *, get_marshal_info, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268A7F0, app::Object__Array *, GetPseudoCustomAttributes, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0268ABA0, app::Object *, GetRawConstantValue, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04749860, FieldInfo_1_GetRawConstantValue__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (app::FieldInfo_1 * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::FieldInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02283820, bool, op_Equality, (app::FieldInfo_1 * left, app::FieldInfo_1 * right));
    IL2CPP_REGISTER_METHOD(0x02283870, bool, op_Inequality, (app::FieldInfo_1 * left, app::FieldInfo_1 * right));
    bool operator == (app::FieldInfo_1 & left, app::FieldInfo_1 & right) {
        return op_Equality(&left, &right);
    }
    bool operator != (app::FieldInfo_1 & left, app::FieldInfo_1 & right) {
        return op_Inequality(&left, &right);
    }
}