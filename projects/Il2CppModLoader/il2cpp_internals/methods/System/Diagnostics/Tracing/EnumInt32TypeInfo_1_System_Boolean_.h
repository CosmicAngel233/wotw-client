#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumInt32TypeInfo_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02F4B260, void, WriteMetadata, (app::EnumInt32TypeInfo_1_System_Boolean_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x02F4B330, void, WriteData, (app::EnumInt32TypeInfo_1_System_Boolean_ * this_ptr, app::TraceLoggingDataCollector * collector, bool * value));
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumInt32TypeInfo_1_System_Boolean_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, __ctor, (app::EnumInt32TypeInfo_1_System_Boolean_ * this_ptr));
}