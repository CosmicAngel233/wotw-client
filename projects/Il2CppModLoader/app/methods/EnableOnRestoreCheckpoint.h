#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::EnableOnRestoreCheckpoint {
    IL2CPP_REGISTER_METHOD(0x00BFC8A0, void, Awake, (app::EnableOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFCA40, void, OnDestroy, (app::EnableOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, OnRestoreCheckpoint, (app::EnableOnRestoreCheckpoint * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047815F8, EnableOnRestoreCheckpoint_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnableOnRestoreCheckpoint * this_ptr))
}
