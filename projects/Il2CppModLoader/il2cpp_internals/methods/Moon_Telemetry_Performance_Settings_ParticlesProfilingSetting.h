#include <interception_macros.h>

namespace app::methods::Moon_Telemetry_Performance_Settings::ParticlesProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x007E99A0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ParticlesProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3EA40, bool, GetState, (app::ParticlesProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E3EAE0, void, SetState, (app::ParticlesProfilingSetting * this_ptr, bool state));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ParticlesProfilingSetting * this_ptr));
}
