#include <interception_macros.h>

namespace app::methods::PlayerRespawnTrigger {
    IL2CPP_REGISTER_METHOD(0x01428A10, void, Awake, (app::PlayerRespawnTrigger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01428A20, void, OnDestroy, (app::PlayerRespawnTrigger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01428A30, void, OnRestoreCheckpoint, (app::PlayerRespawnTrigger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00611C70, void, __ctor, (app::PlayerRespawnTrigger * this_ptr));
}