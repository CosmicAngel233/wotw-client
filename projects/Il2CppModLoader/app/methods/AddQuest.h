#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::AddQuest {
    IL2CPP_REGISTER_METHOD(0x004CA090, void, Perform, (app::AddQuest * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::AddQuest * this_ptr))
}
