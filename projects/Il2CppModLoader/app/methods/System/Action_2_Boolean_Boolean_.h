#include <interception_macros.h>

namespace app::methods::System::Action_2_Boolean_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02C0FA70, void, Invoke, (app::Action_2_Boolean_Boolean_ * this_ptr, bool arg1, bool arg2))
    IL2CPP_REGISTER_METHODINFO(0x047674C0, Action_2_Boolean_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Boolean_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x047315B0, Action_2_Boolean_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C0FDD0, app::IAsyncResult *, BeginInvoke, (app::Action_2_Boolean_Boolean_ * this_ptr, bool arg1, bool arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Boolean_Boolean_ * this_ptr, app::IAsyncResult * result))
}