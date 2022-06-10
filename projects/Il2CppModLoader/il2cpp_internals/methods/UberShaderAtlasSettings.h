#include <interception_macros.h>

namespace app::methods::UberShaderAtlasSettings {
    IL2CPP_REGISTER_METHOD(0x0190A160, app::String *, get_DefaultPlatformPref, ());
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UberAtlassingPlatform__Enum, InitializeAtlasPlatform, ());
    IL2CPP_REGISTER_METHOD(0x0190A200, app::AtlassingSetting, get_CurrentSetting, ());
    IL2CPP_REGISTER_METHOD(0x0190A2C0, float, get_SizeFactor, ());
    IL2CPP_REGISTER_METHOD(0x0190A370, float, get_ZBias, ());
    IL2CPP_REGISTER_METHOD(0x0190A420, int32_t, get_ScreenResolutionX, ());
    IL2CPP_REGISTER_METHOD(0x0190A4C0, int32_t, get_ScreenResolutionY, ());
    IL2CPP_REGISTER_METHOD(0x0190A570, app::UberAtlassingPlatform__Enum, get_CurrentPlatform, ());
    IL2CPP_REGISTER_METHOD(0x0190A610, int32_t, get_Margin, ());
    IL2CPP_REGISTER_METHOD(0x0190A6D0, app::AtlassingSetting, GetSetting, (app::UberAtlassingPlatform__Enum platform));
    IL2CPP_REGISTER_METHOD(0x0190A7A0, void, __cctor, ());
}