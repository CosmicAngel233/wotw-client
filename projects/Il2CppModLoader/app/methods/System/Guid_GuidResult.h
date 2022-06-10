#include <interception_macros.h>

namespace app::methods::System::Guid_GuidResult {
    IL2CPP_REGISTER_METHOD(0x001D4820, void, Init, (app::Guid_GuidResult__Boxed * this_ptr, app::Guid_GuidParseThrowStyle__Enum can_throw))
    IL2CPP_REGISTER_METHOD(0x001D4830, void, SetFailure_1, (app::Guid_GuidResult__Boxed * this_ptr, app::Exception * native_exception))
    IL2CPP_REGISTER_METHOD(0x001D4840, void, SetFailure_2, (app::Guid_GuidResult__Boxed * this_ptr, app::Guid_ParseFailureKind__Enum failure, app::String * failure_message_i_d))
    IL2CPP_REGISTER_METHOD(0x001D4870, void, SetFailure_3, (app::Guid_GuidResult__Boxed * this_ptr, app::Guid_ParseFailureKind__Enum failure, app::String * failure_message_i_d, app::Object * failure_message_format_argument))
    IL2CPP_REGISTER_METHOD(0x001D4890, void, SetFailure_4, (app::Guid_GuidResult__Boxed * this_ptr, app::Guid_ParseFailureKind__Enum failure, app::String * failure_message_i_d, app::Object * failure_message_format_argument, app::String * failure_argument_name, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHODINFO(0x04780770, Guid_GuidResult_SetFailure_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D48A0, app::Exception *, GetGuidParseException, (app::Guid_GuidResult__Boxed * this_ptr))
}