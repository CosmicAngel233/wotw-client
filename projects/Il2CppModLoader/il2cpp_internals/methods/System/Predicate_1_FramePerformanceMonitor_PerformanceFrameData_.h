#include <interception_macros.h>

namespace app::methods::System::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::FramePerformanceMonitor_PerformanceFrameData obj));
    IL2CPP_REGISTER_METHOD(0x0288EBE0, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::FramePerformanceMonitor_PerformanceFrameData obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::IAsyncResult * result));
}