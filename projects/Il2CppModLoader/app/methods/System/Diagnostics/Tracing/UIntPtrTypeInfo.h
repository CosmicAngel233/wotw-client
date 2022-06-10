#pragma once
#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::UIntPtrTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A0F6F0, void, WriteMetadata, (app::UIntPtrTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A0F7D0, void, WriteData, (app::UIntPtrTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::void * * value))
    IL2CPP_REGISTER_METHOD(0x01A0F8C0, void, ctor, (app::UIntPtrTypeInfo * this_ptr))
}
