#include <interception_macros.h>

namespace app::methods::FixedUpdateScheduler {
    IL2CPP_REGISTER_METHOD(0x0126F940, void, Awake, (app::FixedUpdateScheduler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126F9D0, void, FixedUpdate, (app::FixedUpdateScheduler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0126FC10, void, ScheduleAction, (app::FixedUpdateScheduler * this_ptr, app::ISuspendable * suspendable, app::Action * action, float time));
    IL2CPP_REGISTER_METHOD(0x0126FDB0, void, __ctor, (app::FixedUpdateScheduler * this_ptr));
}