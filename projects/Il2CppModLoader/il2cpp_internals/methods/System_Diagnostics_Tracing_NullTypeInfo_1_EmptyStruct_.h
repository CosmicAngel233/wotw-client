#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::NullTypeInfo_1_EmptyStruct_ {
IL2CPP_REGISTER_METHOD(0x01CFFD20, void, __ctor, (app::NullTypeInfo_1_EmptyStruct_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04723D58, NullTypeInfo_1_EmptyStruct___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02BA16B0, void, WriteMetadata, (app::NullTypeInfo_1_EmptyStruct_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteData, (app::NullTypeInfo_1_EmptyStruct_ * this_ptr, app::TraceLoggingDataCollector * collector, app::EmptyStruct * value));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, GetData, (app::NullTypeInfo_1_EmptyStruct_ * this_ptr, app::Object * value));
}
