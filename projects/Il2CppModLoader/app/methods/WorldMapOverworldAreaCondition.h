#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::WorldMapOverworldAreaCondition {
    IL2CPP_REGISTER_METHOD(0x005847F0, bool, Validate, (app::WorldMapOverworldAreaCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WorldMapOverworldAreaCondition * this_ptr))
}
