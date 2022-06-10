#include <interception_macros.h>

namespace app::methods::System::ComponentModel::TypeConverterAttribute {
    IL2CPP_REGISTER_METHOD(0x02946350, void, __ctor_1, (app::TypeConverterAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FEED00, void, __ctor_2, (app::TypeConverterAttribute * this_ptr, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x029463E0, void, __ctor_3, (app::TypeConverterAttribute * this_ptr, app::String * type_name));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_ConverterTypeName, (app::TypeConverterAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029464B0, bool, Equals, (app::TypeConverterAttribute * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (app::TypeConverterAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029465A0, void, __cctor, ());
}