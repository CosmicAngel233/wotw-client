#include <interception_macros.h>

namespace app::methods::FramePerformanceMonitor_PerformanceEntry {
IL2CPP_REGISTER_METHOD(0x016421F0, void, __ctor, (app::FramePerformanceMonitor_PerformanceEntry * this_ptr, app::String * label));
IL2CPP_REGISTER_METHOD(0x01642390, void, Write, (app::FramePerformanceMonitor_PerformanceEntry * this_ptr, app::StreamWriter * writer, int32_t depth, float total_duration));
}
