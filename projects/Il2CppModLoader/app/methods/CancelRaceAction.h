#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CancelRaceAction {
    IL2CPP_REGISTER_METHOD(0x00B22810, void, Perform, (app::CancelRaceAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CancelRaceAction * this_ptr))
}
