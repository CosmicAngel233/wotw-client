#include <interception_macros.h>

namespace app::methods::System::Action_2_Object_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_2_Object_UnityEngine_Vector2_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02C13110, void, Invoke, (app::Action_2_Object_UnityEngine_Vector2_ * this_ptr, app::Object * arg1, app::Vector2 arg2));
    IL2CPP_REGISTER_METHOD(0x02C13670, app::IAsyncResult *, BeginInvoke, (app::Action_2_Object_UnityEngine_Vector2_ * this_ptr, app::Object * arg1, app::Vector2 arg2, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Object_UnityEngine_Vector2_ * this_ptr, app::IAsyncResult * result));
}
