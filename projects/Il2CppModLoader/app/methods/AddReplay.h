#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::AddReplay {
    IL2CPP_REGISTER_METHOD(0x02E8E010, void, ctor, (app::AddReplay * this_ptr, app::String * location, app::ReplayModel * replay))
}
