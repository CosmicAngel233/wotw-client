#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ImportFromBufferToWorking {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRChaperoneSetup_ImportFromBufferToWorking * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x023CD700, bool, Invoke, (app::IVRChaperoneSetup_ImportFromBufferToWorking * this_ptr, app::String * p_buffer, uint32_t n_import_flags));
    IL2CPP_REGISTER_METHOD(0x02F408A0, app::IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_ImportFromBufferToWorking * this_ptr, app::String * p_buffer, uint32_t n_import_flags, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRChaperoneSetup_ImportFromBufferToWorking * this_ptr, app::IAsyncResult * result));
}