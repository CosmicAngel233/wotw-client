#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::WorldMapRemoveObjective {
    IL2CPP_REGISTER_METHOD(0x00582C00, void, Perform, (app::WorldMapRemoveObjective * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WorldMapRemoveObjective * this_ptr))
}
