#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRCompositor__GetFrameTimeRemaining {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRCompositor_GetFrameTimeRemaining * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x028815A0, float, Invoke, (app::IVRCompositor_GetFrameTimeRemaining * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetFrameTimeRemaining * this_ptr, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::IVRCompositor_GetFrameTimeRemaining * this_ptr, app::IAsyncResult * result));
}
