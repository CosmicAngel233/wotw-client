#pragma once
#include <interception_macros.h>

namespace app::methods::RestartRaceAction {
    IL2CPP_REGISTER_METHOD(0x0090B530, void, Perform, (app::RestartRaceAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RestartRaceAction * this_ptr))
}
