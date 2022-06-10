#include <interception_macros.h>

namespace app::methods::SeinHold {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001B50, bool, get_IsStatePerforming, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement *, get_PlatformMovement, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001B90, bool, get_IsPickingUp, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001BD0, bool, get_IsHolding, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001C10, bool, get_IsDropping, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001C50, bool, get_IsThrowing, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001C90, bool, get_RequiresTorchPose, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_IsUsing, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001CF0, void, set_IsUsing, (app::SeinHold * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::IHoldable *, get_CurrentHoldable, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_SpriteMirrorLock, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001D30, void, set_SpriteMirrorLock, (app::SeinHold * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01001DF0, bool, get_IsDropButtonDown, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01001F20, bool, get_OnDropButtonPressed, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01002050, bool, get_OnDropButtonReleased, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01002170, bool, get_IsThrowButtonDown, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01002290, bool, get_IsDropButtonUsed, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01002340, void, set_IsDropButtonUsed, (app::SeinHold * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x010023F0, bool, get_OnUseButtonPressed, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01002520, bool, get_IsUseButtonUsed, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010025D0, void, set_IsUseButtonUsed, (app::SeinHold * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x01002680, bool, get_ShouldThrow, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01002690, void, OnSetReferenceToSein, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01002770, void, OnAwake, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01003B50, void, Start, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01003F10, void, OnDestroy, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01004340, void, OnPreRestoreCheckpoint, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476F360, SeinHold_OnPreRestoreCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01004450, void, OnPostRestoreCheckpoint, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04735D40, SeinHold_OnPostRestoreCheckpoint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01004460, void, SyncWithPlayerUberState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01004760, void, UpdateCharacterState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01004820, void, OnExit, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010049B0, void, OnDisable, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01004B00, void, OnModifyHorizontalPlatformMovementSettings, (app::SeinHold * this_ptr, app::HorizontalPlatformMovementSettings * settings));
    IL2CPP_REGISTER_METHODINFO(0x047179F8, SeinHold_OnModifyHorizontalPlatformMovementSettings__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01004C60, void, PickUp, (app::SeinHold * this_ptr, app::IHoldable * holdable));
    IL2CPP_REGISTER_METHOD(0x01004EA0, void, ForcePickup, (app::SeinHold * this_ptr, app::IHoldable * holdable));
    IL2CPP_REGISTER_METHOD(0x010050F0, void, Drop, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01005220, void, DropImmediate, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01005350, void, SetCurrentHoldableToNull, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01005370, void, OnDestroyHoldable, (app::SeinHold * this_ptr, app::IHoldable * holdable));
    IL2CPP_REGISTER_METHOD(0x01005620, void, EnterPickupState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473B778, SeinHold_EnterPickupState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01005840, void, OnPickupAnimationPart1Finished, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04729900, SeinHold_OnPickupAnimationPart1Finished__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01005B20, void, OnPickupAnimationPart2Finished, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04707C00, SeinHold_OnPickupAnimationPart2Finished__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01005B30, bool, ShouldPickupAnimationPart2KeepPlaying, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04701190, SeinHold_ShouldPickupAnimationPart2KeepPlaying__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01005CA0, void, ExitPickupState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474E420, SeinHold_ExitPickupState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdatePickupState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04794C70, SeinHold_UpdatePickupState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01005DA0, void, EnterDroppingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047701E0, SeinHold_EnterDroppingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x010060E0, void, OnDropAnimationPart1Finished, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047168A0, SeinHold_OnDropAnimationPart1Finished__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01006120, bool, ShouldDropAnimationsKeepPlaying, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04791698, SeinHold_ShouldDropAnimationsKeepPlaying__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01006420, void, ExitDroppingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04704560, SeinHold_ExitDroppingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateDroppingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047055D8, SeinHold_UpdateDroppingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01006540, void, ChangeToHoldingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01006580, void, EnterHoldingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04702290, SeinHold_EnterHoldingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x010066A0, void, ExitHoldingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04775E10, SeinHold_ExitHoldingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01006840, void, UpdateHoldingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0472DBF0, SeinHold_UpdateHoldingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01005350, void, EnterInactiveState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04755450, SeinHold_EnterInactiveState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01006B20, void, UpdateInactiveState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04720A78, SeinHold_UpdateInactiveState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01006BA0, app::IHoldable *, FindHoldableToPickup, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01007300, void, ChangeToThrowingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01007340, void, EnterThrowingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047087F0, SeinHold_EnterThrowingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01007910, void, UpdateThrowingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047358B8, SeinHold_UpdateThrowingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x010083A0, void, ThrowTorch, (app::SeinHold * this_ptr, app::Action * end_throw_callback));
    IL2CPP_REGISTER_METHOD(0x010084F0, void, ThrowTorchInner, (app::SeinHold * this_ptr, app::SeinHold_ThrowAnimationSet * animation_set));
    IL2CPP_REGISTER_METHOD(0x010089F0, void, OnAnimStoped, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04704768, SeinHold_OnAnimStoped__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01008A30, void, ExitThrowingState, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04706C88, SeinHold_ExitThrowingState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01008A60, app::Vector2, GetVelocityFromDirection, (app::SeinHold * this_ptr, app::Vector3 direction));
    IL2CPP_REGISTER_METHOD(0x01001C50, bool, ShouldContinuePlayingThrowAim, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047293A0, SeinHold_ShouldContinuePlayingThrowAim__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01008C50, void, __ctor, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01008FF0, void, __cctor, ());
    IL2CPP_REGISTER_METHOD(0x01009080, void, _ThrowTorchInner_b__130_0, (app::SeinHold * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04748780, SeinHold__ThrowTorchInner_b__130_0__MethodInfo);
}