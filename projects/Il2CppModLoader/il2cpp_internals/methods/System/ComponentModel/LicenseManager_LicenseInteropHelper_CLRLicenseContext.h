#include <interception_macros.h>

namespace app::methods::System::ComponentModel::LicenseManager_LicenseInteropHelper_CLRLicenseContext {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (app::LicenseManager_LicenseInteropHelper_CLRLicenseContext * this_ptr, app::LicenseUsageMode__Enum usage_mode, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::LicenseUsageMode__Enum, get_UsageMode, (app::LicenseManager_LicenseInteropHelper_CLRLicenseContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01FF3FA0, app::String *, GetSavedLicenseKey, (app::LicenseManager_LicenseInteropHelper_CLRLicenseContext * this_ptr, app::Type * type, app::Assembly * resource_assembly));
    IL2CPP_REGISTER_METHOD(0x01FF4070, void, SetSavedLicenseKey, (app::LicenseManager_LicenseInteropHelper_CLRLicenseContext * this_ptr, app::Type * type, app::String * key));
}