#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumByteTypeInfo_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B40550, void, WriteMetadata, (app::EnumByteTypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x02B40620, void, WriteData, (app::EnumByteTypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * * value));
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumByteTypeInfo_1_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, __ctor, (app::EnumByteTypeInfo_1_System_Object_ * this_ptr));
}