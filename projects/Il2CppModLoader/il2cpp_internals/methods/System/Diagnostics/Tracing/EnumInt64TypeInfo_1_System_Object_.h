#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumInt64TypeInfo_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02F4EFB0, void, WriteMetadata, (app::EnumInt64TypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x02F4F080, void, WriteData, (app::EnumInt64TypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * * value));
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumInt64TypeInfo_1_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, __ctor, (app::EnumInt64TypeInfo_1_System_Object_ * this_ptr));
}