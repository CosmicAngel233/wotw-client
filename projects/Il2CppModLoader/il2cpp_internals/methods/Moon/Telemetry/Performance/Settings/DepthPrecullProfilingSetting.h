#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::DepthPrecullProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x005D89A0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::DepthPrecullProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3BA10, app::RenderScope__Enum *, GetScope, (app::DepthPrecullProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::DepthPrecullProfilingSetting * this_ptr));
}