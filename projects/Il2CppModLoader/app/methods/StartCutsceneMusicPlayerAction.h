#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::StartCutsceneMusicPlayerAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::StartCutsceneMusicPlayerAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::StartCutsceneMusicPlayerAction * this_ptr))
}
