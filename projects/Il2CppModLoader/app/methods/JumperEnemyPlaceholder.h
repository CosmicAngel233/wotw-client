#pragma once
#include <interception_macros.h>

namespace app::methods::JumperEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00E59010, app::LegacyEntity *, Instantiate, (app::JumperEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59740, void, ctor, (app::JumperEnemyPlaceholder * this_ptr))
}
