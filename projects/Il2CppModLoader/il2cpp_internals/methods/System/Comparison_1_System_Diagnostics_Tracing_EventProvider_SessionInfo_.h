#include <interception_macros.h>

namespace app::methods::System::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02B85030, int32_t, Invoke, (app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::EventProvider_SessionInfo x, app::EventProvider_SessionInfo y));
    IL2CPP_REGISTER_METHOD(0x02C7DF30, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::EventProvider_SessionInfo x, app::EventProvider_SessionInfo y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::IAsyncResult * result));
}