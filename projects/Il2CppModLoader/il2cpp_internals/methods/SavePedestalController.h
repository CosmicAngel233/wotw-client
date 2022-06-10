#include <interception_macros.h>

namespace app::methods::SavePedestalController {
    IL2CPP_REGISTER_METHOD(0x00917F50, app::MoonAnimation *, get_EffectiveTeleportingStart, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00917F70, app::MoonAnimation *, get_EffectiveTeleportingLoop, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00917F90, void, Nullify, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04791478, SavePedestalController_Nullify__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00917FA0, bool, CanOpenTeleportMenu, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00917FC0, bool, IsAnyOtherTeleporterActive, (app::String * ignore_identifier));
    IL2CPP_REGISTER_METHOD(0x00918190, void, Awake, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00918480, void, OnDestroy, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00918770, void, OnGameReset, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04756498, SavePedestalController_OnGameReset__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00918970, void, OnPostRestoreCheckpoint, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04744D10, SavePedestalController_OnPostRestoreCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00918B90, void, Show, (app::String * identifier));
    IL2CPP_REGISTER_METHOD(0x00918FE0, void, OnClose, ());
    IL2CPP_REGISTER_METHOD(0x00919160, bool, ActivateAll, ());
    IL2CPP_REGISTER_METHODINFO(0x0471ECE0, SavePedestalController_ActivateAll__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00919350, bool, FastTravelEnabled, ());
    IL2CPP_REGISTER_METHOD(0x00919490, bool, IsTeleporterActiveAtMapPosition, (app::Vector2 position));
    IL2CPP_REGISTER_METHOD(0x00919780, void, Activate, (app::String * identifier));
    IL2CPP_REGISTER_METHOD(0x009199B0, void, OnTeleporterActivationStateChanged, ());
    IL2CPP_REGISTER_METHOD(0x00919B20, bool, get_IsRidingKu, ());
    IL2CPP_REGISTER_METHOD(0x00919C70, bool, get_IsOnGround, ());
    IL2CPP_REGISTER_METHOD(0x00917FA0, bool, CanTeleport, ());
    IL2CPP_REGISTER_METHOD(0x00919DC0, app::SavePedestalController_CanTeleportResult__Enum, CanTeleportWithResult, ());
    IL2CPP_REGISTER_METHOD(0x0091A1F0, bool, IsTeleportingFromPedestal, ());
    IL2CPP_REGISTER_METHOD(0x0091A2B0, void, BeginTeleportation, (app::Vector2 teleport_target_world_position));
    IL2CPP_REGISTER_METHOD(0x0091B350, void, OnFinishedTeleportingStartAnimation, ());
    IL2CPP_REGISTER_METHODINFO(0x04751F70, SavePedestalController_OnFinishedTeleportingStartAnimation__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0091B660, bool, get_IsTeleporting, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0091B680, void, FixedUpdate, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0091BF70, void, CheckShouldMoveCamera, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0091C040, void, OnFadedToBlack, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0091CBE0, void, OnFinishedTeleporting, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04758C98, SavePedestalController_OnFinishedTeleporting__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0091D380, void, OnFinishedTeleportingFinishAnimation, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04706E20, SavePedestalController_OnFinishedTeleportingFinishAnimation__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_IsSuspended, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00689DB0, void, set_IsSuspended, (app::SavePedestalController * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x0091D5A0, app::SuspendableMask__Enum, get_Mask, (app::SavePedestalController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0091D5B0, void, set_Mask, (app::SavePedestalController * this_ptr, app::SuspendableMask__Enum value));
    IL2CPP_REGISTER_METHOD(0x0091D670, void, __ctor, (app::SavePedestalController * this_ptr));
}