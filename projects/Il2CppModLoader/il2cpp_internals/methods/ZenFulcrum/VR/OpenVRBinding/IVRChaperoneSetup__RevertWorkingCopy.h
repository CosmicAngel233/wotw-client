#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__RevertWorkingCopy {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperoneSetup_RevertWorkingCopy * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::IVRChaperoneSetup_RevertWorkingCopy * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_RevertWorkingCopy * this_ptr, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperoneSetup_RevertWorkingCopy * this_ptr, app::IAsyncResult * result));
}
