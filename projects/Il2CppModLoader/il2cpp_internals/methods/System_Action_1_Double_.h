#include <interception_macros.h>

namespace app::methods::System::Action_1_Double_ {
IL2CPP_REGISTER_METHOD(0x02A05520, void, Invoke, (app::Action_1_Double_ * this_ptr, double obj));
IL2CPP_REGISTER_METHODINFO(0x04742998, Action_1_Double__Invoke__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_Double_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHODINFO(0x0470ED78, Action_1_Double___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A05850, IAsyncResult *, BeginInvoke, (app::Action_1_Double_ * this_ptr, double obj, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Double_ * this_ptr, app::IAsyncResult * result));
}
