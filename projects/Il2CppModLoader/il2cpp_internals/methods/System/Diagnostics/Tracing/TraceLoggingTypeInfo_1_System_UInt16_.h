#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_UInt16_ {
    IL2CPP_REGISTER_METHOD(0x02877D40, void, __ctor_1, (app::TraceLoggingTypeInfo_1_System_UInt16_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472DA50, TraceLoggingTypeInfo_1_System_UInt16___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02877E10, void, __ctor_2, (app::TraceLoggingTypeInfo_1_System_UInt16_ * this_ptr, app::String * name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags));
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_UInt16_ *, get_Instance, ());
    IL2CPP_REGISTER_METHOD(0x02872350, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_UInt16_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02877F30, app::TraceLoggingTypeInfo_1_System_UInt16_ *, GetInstance, (app::List_1_System_Type_ * recursion_check));
    IL2CPP_REGISTER_METHOD(0x02878120, app::TraceLoggingTypeInfo_1_System_UInt16_ *, InitInstance, ());
}