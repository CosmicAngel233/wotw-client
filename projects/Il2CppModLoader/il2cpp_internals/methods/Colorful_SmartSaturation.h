#include <interception_macros.h>

namespace app::methods::Colorful::SmartSaturation {
IL2CPP_REGISTER_METHOD(0x03053130, Texture2D *, get_m_CurveTexture, (app::SmartSaturation * this_ptr));
IL2CPP_REGISTER_METHOD(0x03053200, void, Reset, (app::SmartSaturation * this_ptr));
IL2CPP_REGISTER_METHOD(0x03053430, void, OnEnable, (app::SmartSaturation * this_ptr));
IL2CPP_REGISTER_METHOD(0x03053450, void, OnDisable, (app::SmartSaturation * this_ptr));
IL2CPP_REGISTER_METHOD(0x030535F0, void, UpdateCurve, (app::SmartSaturation * this_ptr));
IL2CPP_REGISTER_METHOD(0x03053A70, void, OnRenderImage, (app::SmartSaturation * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03053D00, String *, GetShaderName, (app::SmartSaturation * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B5D320, void, __ctor, (app::SmartSaturation * this_ptr));
}
