#include <interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::WwiseSoundBankRefCountProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E41140, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::WwiseSoundBankRefCountProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E41150, bool, GetState, (app::WwiseSoundBankRefCountProfilingSetting * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E411F0, void, SetState, (app::WwiseSoundBankRefCountProfilingSetting * this_ptr, bool state));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::WwiseSoundBankRefCountProfilingSetting * this_ptr));
}