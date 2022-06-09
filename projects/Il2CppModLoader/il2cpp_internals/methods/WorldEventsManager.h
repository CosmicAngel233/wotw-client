#include <interception_macros.h>

namespace app::methods::WorldEventsManager {
    IL2CPP_REGISTER_METHOD(0x005819F0, void, OnGameReset, (app::WorldEventsManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00581AC0, void, Serialize, (app::WorldEventsManager * this_ptr, app::Archive * ar));
    IL2CPP_REGISTER_METHOD(0x00582220, app::WorldEventsRuntime *, Find, (app::WorldEventsManager * this_ptr, app::WorldEvents * world_events));
    IL2CPP_REGISTER_METHOD(0x00582590, void, __ctor, (app::WorldEventsManager * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005827D0, void, __cctor, ());
}
