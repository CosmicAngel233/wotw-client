#include <interception_macros.h>

namespace app::methods::MicroProfilerCSV {
    IL2CPP_REGISTER_METHOD(0x03157BF0, void, AppendHeaderRow_1, (app::StringBuilder * s, app::String * separator));
    IL2CPP_REGISTER_METHOD(0x03157CB0, void, AppendHeaderRow_2, (app::StringBuilder * s, app::String * separator, app::MetricOutput__Array * formatting));
    IL2CPP_REGISTER_METHOD(0x03157E60, void, AppendSummaryHeaderRow, (app::StringBuilder * s, app::String * separator));
    IL2CPP_REGISTER_METHOD(0x03157F20, void, AppendSummaryToStringBuilder, (int32_t start_frame, int32_t end_frame, app::StringBuilder * sb, app::MetricOutput__Array * formatting, app::String * separator));
    IL2CPP_REGISTER_METHOD(0x03158120, void, AppendToStringBuilder_1, (app::MicroProfiler_SampleStats * stats, app::StringBuilder * sb, app::String * separator));
    IL2CPP_REGISTER_METHOD(0x031581F0, void, AppendToStringBuilder_2, (app::MicroProfiler_SampleStats * stats, app::StringBuilder * sb, app::MetricOutput__Array * formatting, app::String * separator));
}