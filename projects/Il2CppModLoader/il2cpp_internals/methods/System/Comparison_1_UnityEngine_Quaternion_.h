#include <interception_macros.h>

namespace app::methods::System::Comparison_1_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_UnityEngine_Quaternion_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02B892E0, int32_t, Invoke, (app::Comparison_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion x, app::Quaternion y));
    IL2CPP_REGISTER_METHOD(0x02C841B0, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion x, app::Quaternion y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_Quaternion_ * this_ptr, app::IAsyncResult * result));
}