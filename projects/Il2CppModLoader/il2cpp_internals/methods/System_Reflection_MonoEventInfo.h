#include <interception_macros.h>

namespace app::methods::System_Reflection::MonoEventInfo {
    IL2CPP_REGISTER_METHOD(0x02690470, void, get_event_info, (app::MonoEvent * ev, app::MonoEventInfo * info));
    IL2CPP_REGISTER_METHOD(0x02690580, app::MonoEventInfo, GetEventInfo, (app::MonoEvent * ev));
}
