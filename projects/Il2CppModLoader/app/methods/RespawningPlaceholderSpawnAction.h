#pragma once
#include <interception_macros.h>

namespace app::methods::RespawningPlaceholderSpawnAction {
    IL2CPP_REGISTER_METHOD(0x0090A9B0, void, Perform, (app::RespawningPlaceholderSpawnAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RespawningPlaceholderSpawnAction * this_ptr))
}
