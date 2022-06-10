#include <interception_macros.h>

namespace app::methods::TurbulenceManagerBinder {
    IL2CPP_REGISTER_METHOD(0x00B17270, app::Texture2D *, CombineTexture, (app::TurbulenceManagerBinder * this_ptr, app::Texture2D * tex1, app::Texture2D * tex2, float tween_time))
    IL2CPP_REGISTER_METHOD(0x00B177C0, app::TurbulenceManagerBinder_CurrentShaderSettings, TweenSettings, (app::TurbulenceManagerBinder * this_ptr, app::TurbulenceSettings * from, app::TurbulenceSettings * to, float tween_time, float time, float str_mult, float speed_mult))
    IL2CPP_REGISTER_METHOD(0x00B17BD0, app::TurbulenceManagerBinder_CurrentShaderSettings, Bind, (app::TurbulenceManagerBinder * this_ptr, app::TurbulenceSettings * from, app::TurbulenceSettings * to, float tween_time, float time, float str_mult, float speed_mult))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TurbulenceManagerBinder * this_ptr))
}