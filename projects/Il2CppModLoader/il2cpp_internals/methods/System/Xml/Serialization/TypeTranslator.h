#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::TypeTranslator {
    IL2CPP_REGISTER_METHOD(0x01C93DB0, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x01C98520, app::TypeData *, GetTypeData_1, (app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01C985C0, app::TypeData *, GetTypeData_2, (app::Type * runtime_type, app::String * xml_data_type, bool underlying_enum_type));
    IL2CPP_REGISTER_METHODINFO(0x04794660, TypeTranslator_GetTypeData_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C993D0, app::TypeData *, GetPrimitiveTypeData_1, (app::String * type_name));
    IL2CPP_REGISTER_METHOD(0x01C99470, app::TypeData *, GetPrimitiveTypeData_2, (app::String * type_name, bool nullable));
    IL2CPP_REGISTER_METHODINFO(0x047677F0, TypeTranslator_GetPrimitiveTypeData_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C99720, app::TypeData *, FindPrimitiveTypeData, (app::String * type_name));
    IL2CPP_REGISTER_METHOD(0x01C99840, app::String *, GetArrayName, (app::String * elem_name));
    IL2CPP_REGISTER_METHOD(0x01C99A00, void, ParseArrayType, (app::String * array_type, app::String * * type, app::String * * ns, app::String * * dimensions));
    IL2CPP_REGISTER_METHODINFO(0x0472E7E0, TypeTranslator_ParseArrayType__MethodInfo);
}