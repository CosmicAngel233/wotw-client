#include <interception_macros.h>

namespace app::methods::GenericRegularEvent {
IL2CPP_REGISTER_METHOD(0x02E91620, void, __ctor, (app::GenericRegularEvent * this_ptr, app::String * message, app::String * stacktrace, app::String * group, app::LogType__Enum log_type));
IL2CPP_REGISTER_METHOD(0x02E91640, DatadogEvent *, GetCompatibleEvent, (app::GenericRegularEvent * this_ptr));
}
