#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::Int64TypeInfo {
IL2CPP_REGISTER_METHOD(0x019FEFC0, void, WriteMetadata, (app::Int64TypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x019FF090, void, WriteData, (app::Int64TypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::int64_t * value));
IL2CPP_REGISTER_METHOD(0x019FF0C0, void, __ctor, (app::Int64TypeInfo * this_ptr));
}
