#include <interception_macros.h>

namespace app::methods::System::Func_2_Moon_JsonParser_Slot_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Func_2_Moon_JsonParser_Slot_Object_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHODINFO(0x047795B0, Func_2_Moon_JsonParser_Slot_Object___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02887790, app::Object *, Invoke, (app::Func_2_Moon_JsonParser_Slot_Object_ * this_ptr, app::JsonParser_Slot arg));
    IL2CPP_REGISTER_METHOD(0x02F9D380, app::IAsyncResult *, BeginInvoke, (app::Func_2_Moon_JsonParser_Slot_Object_ * this_ptr, app::JsonParser_Slot arg, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::Func_2_Moon_JsonParser_Slot_Object_ * this_ptr, app::IAsyncResult * result));
}