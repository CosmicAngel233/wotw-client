#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetProjectionMatrix {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetProjectionMatrix * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02CED4F0, app::HmdMatrix44_t, Invoke, (app::IVRSystem_GetProjectionMatrix * this_ptr, app::EVREye__Enum e_eye, float f_near_z, float f_far_z));
    IL2CPP_REGISTER_METHOD(0x02CED9A0, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetProjectionMatrix * this_ptr, app::EVREye__Enum e_eye, float f_near_z, float f_far_z, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x02881D00, app::HmdMatrix44_t, EndInvoke, (app::IVRSystem_GetProjectionMatrix * this_ptr, app::IAsyncResult * result));
}
