#include <interception_macros.h>

namespace app::methods::System::Action_1_InstantiateUtility_InstantiationInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x029FD190, void, Invoke, (app::Action_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::InstantiateUtility_InstantiationInfo obj));
    IL2CPP_REGISTER_METHOD(0x029FE550, app::IAsyncResult *, BeginInvoke, (app::Action_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::InstantiateUtility_InstantiationInfo obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::IAsyncResult * result));
}