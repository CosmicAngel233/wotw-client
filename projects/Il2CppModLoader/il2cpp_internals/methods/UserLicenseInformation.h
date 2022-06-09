#include <interception_macros.h>

namespace app::methods::UserLicenseInformation {
    IL2CPP_REGISTER_METHOD(0x013B1840, bool, get_IsFullVersion, ());
    IL2CPP_REGISTER_METHOD(0x013B1930, bool, get_IsTrial, ());
    IL2CPP_REGISTER_METHOD(0x013B1A20, bool, get_IsTrialUsed, ());
    IL2CPP_REGISTER_METHOD(0x013B1B10, void, __ctor, (app::UserLicenseInformation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013B1B10, void, OnLicenseChanged, (app::UserLicenseInformation * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013B1B20, void, __cctor, ());
}
