#include <interception_macros.h>

namespace app::methods::System::ComponentModel::DataObjectFieldAttribute {
    IL2CPP_REGISTER_METHOD(0x01FDE6D0, void, __ctor_1, (app::DataObjectFieldAttribute * this_ptr, bool primary_key));
    IL2CPP_REGISTER_METHOD(0x01FDE6F0, void, __ctor_2, (app::DataObjectFieldAttribute * this_ptr, bool primary_key, bool is_identity));
    IL2CPP_REGISTER_METHOD(0x01FDE710, void, __ctor_3, (app::DataObjectFieldAttribute * this_ptr, bool primary_key, bool is_identity, bool is_nullable));
    IL2CPP_REGISTER_METHOD(0x01FDE730, void, __ctor_4, (app::DataObjectFieldAttribute * this_ptr, bool primary_key, bool is_identity, bool is_nullable, int32_t length));
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_IsIdentity, (app::DataObjectFieldAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_IsNullable, (app::DataObjectFieldAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Length, (app::DataObjectFieldAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_PrimaryKey, (app::DataObjectFieldAttribute * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FDE750, bool, Equals, (app::DataObjectFieldAttribute * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::DataObjectFieldAttribute * this_ptr));
}