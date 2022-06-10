#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::ScreenSpaceReflection {
    IL2CPP_REGISTER_METHOD(0x0250B530, app::Shader *, get_shader, (app::ScreenSpaceReflection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0250B630, app::Material *, get_material, (app::ScreenSpaceReflection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0250B700, app::Camera *, get_camera_, (app::ScreenSpaceReflection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0250B7D0, void, OnEnable, (app::ScreenSpaceReflection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0250BE80, void, OnDisable, (app::ScreenSpaceReflection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0250BFE0, void, OnPreRender, (app::ScreenSpaceReflection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0250E1B0, void, __ctor, (app::ScreenSpaceReflection * this_ptr));
}