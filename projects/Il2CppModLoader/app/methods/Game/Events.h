#pragma once
#include <interception_macros.h>

namespace app::methods::Game::Events {
    IL2CPP_REGISTER_METHOD(0x01525B70, app::GameScheduler *, get_Scheduler, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Events_1 * this_ptr))
}
