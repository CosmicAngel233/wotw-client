#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::LowLevel::PlayerLoopSystem_UpdateFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PlayerLoopSystem_UpdateFunction * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::PlayerLoopSystem_UpdateFunction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::PlayerLoopSystem_UpdateFunction * this_ptr, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PlayerLoopSystem_UpdateFunction * this_ptr, app::IAsyncResult * result));
}