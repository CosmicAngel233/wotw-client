#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ChangeDifficultyAction {
    IL2CPP_REGISTER_METHOD(0x01045860, void, Perform, (app::ChangeDifficultyAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01045900, app::String *, GetNiceName, (app::ChangeDifficultyAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ChangeDifficultyAction * this_ptr))
}
