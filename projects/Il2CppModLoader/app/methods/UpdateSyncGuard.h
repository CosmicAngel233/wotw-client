#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UpdateSyncGuard {
    IL2CPP_REGISTER_METHOD(0x001267E0, bool, OnFixedUpdate, (app::UpdateSyncGuard__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001267F0, void, OnUpdate, (app::UpdateSyncGuard__Boxed * this_ptr))
}
