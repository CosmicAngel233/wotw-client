#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CancelDifficultyScreenAction {
    IL2CPP_REGISTER_METHOD(0x00B22670, void, Perform, (app::CancelDifficultyScreenAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CancelDifficultyScreenAction * this_ptr))
}
