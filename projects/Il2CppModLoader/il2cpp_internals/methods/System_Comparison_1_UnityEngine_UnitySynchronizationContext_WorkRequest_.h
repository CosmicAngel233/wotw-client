#include <interception_macros.h>

namespace app::methods::System::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * this_ptr, app::UnitySynchronizationContext_WorkRequest x, app::UnitySynchronizationContext_WorkRequest y));
IL2CPP_REGISTER_METHOD(0x02C85BB0, IAsyncResult *, BeginInvoke, (app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * this_ptr, app::UnitySynchronizationContext_WorkRequest x, app::UnitySynchronizationContext_WorkRequest y, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ * this_ptr, app::IAsyncResult * result));
}
