#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CEE110, app::HmdMatrix34_t, Invoke, (app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x02CEBB50, app::HmdMatrix34_t, EndInvoke, (app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose * this_ptr, app::IAsyncResult * result))
}