#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSettings__Sync {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSettings_Sync * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE9A00, bool, Invoke, (app::IVRSettings_Sync * this_ptr, bool b_force, app::EVRSettingsError__Enum * pe_error));
IL2CPP_REGISTER_METHOD(0x02CE9D80, IAsyncResult *, BeginInvoke, (app::IVRSettings_Sync * this_ptr, bool b_force, app::EVRSettingsError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRSettings_Sync * this_ptr, app::EVRSettingsError__Enum * pe_error, app::IAsyncResult * result));
}
