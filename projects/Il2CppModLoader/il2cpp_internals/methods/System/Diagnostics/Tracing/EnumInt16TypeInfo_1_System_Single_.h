#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumInt16TypeInfo_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02F4A830, void, WriteMetadata, (app::EnumInt16TypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x02F4A900, void, WriteData, (app::EnumInt16TypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingDataCollector * collector, float * value));
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumInt16TypeInfo_1_System_Single_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, __ctor, (app::EnumInt16TypeInfo_1_System_Single_ * this_ptr));
}