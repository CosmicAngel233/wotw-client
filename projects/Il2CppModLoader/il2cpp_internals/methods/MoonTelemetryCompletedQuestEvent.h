#include <interception_macros.h>

namespace app::methods::MoonTelemetryCompletedQuestEvent {
    IL2CPP_REGISTER_METHOD(0x0146D940, void, __ctor, (app::MoonTelemetryCompletedQuestEvent * this_ptr, app::Quest * quest));
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String *, get_Name, (app::MoonTelemetryCompletedQuestEvent * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0146DA60, void, SerializeToObject, (app::MoonTelemetryCompletedQuestEvent * this_ptr, app::JsonBuilder_Object obj));
}