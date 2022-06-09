#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::BooleanArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01747160, void, WriteMetadata, (app::BooleanArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x01747230, void, WriteData, (app::BooleanArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Boolean__Array * * value));
    IL2CPP_REGISTER_METHOD(0x01747350, void, __ctor, (app::BooleanArrayTypeInfo * this_ptr));
}
