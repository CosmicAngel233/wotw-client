#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GoToTrialEndAction {
    IL2CPP_REGISTER_METHOD(0x008004E0, void, Perform, (app::GoToTrialEndAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::GoToTrialEndAction * this_ptr))
}
