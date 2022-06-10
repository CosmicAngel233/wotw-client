#include <interception_macros.h>

namespace app::methods::EnvironmentLight {
    IL2CPP_REGISTER_METHOD(0x00CA6810, bool, get_IsSceneLight, (app::EnvironmentLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CA68C0, void, OnEnable, (app::EnvironmentLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CA69B0, void, OnDisable, (app::EnvironmentLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CA6B60, void, Update, (app::EnvironmentLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CA6F20, app::Color, GetColorForChannel, (app::EnvironmentLight * this_ptr, app::EnvironmentLight_Channel__Enum channel));
    IL2CPP_REGISTER_METHOD(0x00CA6F80, void, ClearBind, (app::Material * bind_material, int32_t num));
    IL2CPP_REGISTER_METHOD(0x00CA71F0, void, BindLightToMaterial, (app::EnvironmentLight * this_ptr, app::Material * bind_material, float random_offset, int32_t num));
    IL2CPP_REGISTER_METHOD(0x00CA7280, void, __ctor, (app::EnvironmentLight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CA74D0, void, __cctor, ());
}