#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::TimeSpanTypeInfo {
IL2CPP_REGISTER_METHOD(0x01A09160, void, WriteMetadata, (app::TimeSpanTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x019FF090, void, WriteData, (app::TimeSpanTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::TimeSpan * value));
IL2CPP_REGISTER_METHOD(0x01A09230, void, __ctor, (app::TimeSpanTypeInfo * this_ptr));
}
