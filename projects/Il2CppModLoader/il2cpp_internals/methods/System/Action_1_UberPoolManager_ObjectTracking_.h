#include <interception_macros.h>

namespace app::methods::System::Action_1_UberPoolManager_ObjectTracking_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_UberPoolManager_ObjectTracking_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_UberPoolManager_ObjectTracking_ * this_ptr, app::UberPoolManager_ObjectTracking obj));
    IL2CPP_REGISTER_METHOD(0x02C08CA0, app::IAsyncResult *, BeginInvoke, (app::Action_1_UberPoolManager_ObjectTracking_ * this_ptr, app::UberPoolManager_ObjectTracking obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UberPoolManager_ObjectTracking_ * this_ptr, app::IAsyncResult * result));
}