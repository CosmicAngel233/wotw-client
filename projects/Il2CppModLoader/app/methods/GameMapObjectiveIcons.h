#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::GameMapObjectiveIcons {
    IL2CPP_REGISTER_METHOD(0x0069DD30, void, ShowIcons, (app::GameMapObjectiveIcons * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069DE50, void, HideIcons, (app::GameMapObjectiveIcons * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0069DF70, void, Advance, (app::GameMapObjectiveIcons * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GameMapObjectiveIcons * this_ptr))
}
