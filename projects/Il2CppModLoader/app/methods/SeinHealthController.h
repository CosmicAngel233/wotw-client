#include <interception_macros.h>

namespace app::methods::SeinHealthController {
    IL2CPP_REGISTER_METHOD(0x00FFBA80, bool, get_IsHealthFull, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFBAD0, float, get_Amount, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFBBB0, void, set_Amount, (app::SeinHealthController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FFBD00, float, get_MaxHealth, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFBE90, float, get_ActualMaxHealth, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFBED0, float, get_UntouchableMinHealth, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_OverMaxHealthBoost, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFBEF0, void, set_OverMaxHealthBoost, (app::SeinHealthController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FFBFA0, int32_t, get_BaseMaxHealth, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFC070, void, set_BaseMaxHealth, (app::SeinHealthController * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00FFC190, int32_t, get_MinRespawnHealth, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFC250, void, set_MinRespawnHealth, (app::SeinHealthController * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_MaxHealthBonus, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623270, void, set_MaxHealthBonus, (app::SeinHealthController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FFC310, float, get_MaxHealthWithBonus, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFC3E0, bool, get_IsSwapShardEquipped, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFC4D0, void, OnEnable, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFC7B0, void, OnDisable, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFCA90, void, OnGameReset, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760C30, SeinHealthController_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FFCF00, void, SetAmount, (app::SeinHealthController * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00FFCF30, void, FixedUpdate, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD110, void, LateUpdate, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD110, void, SetDirty, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD130, float, get_VisualMinAmountNormalized, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD160, float, get_VisualMaxAmountNormalized, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD190, float, get_CurrentNormalized, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD1D0, int32_t, get_HealthUpgradesCollected, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD290, bool, get_AtMaxHealth, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD2D0, void, OnRespawn, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFD5B0, void, LoseHealth, (app::SeinHealthController * this_ptr, int32_t amount, float visual_fill_speed))
    IL2CPP_REGISTER_METHOD(0x00FFD670, void, UpdateLastResortEffect, (app::SeinHealthController * this_ptr, float prev_health))
    IL2CPP_REGISTER_METHOD(0x00FFDAA0, void, Fill, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFDAF0, void, GainHealth, (app::SeinHealthController * this_ptr, float amount, float visual_fill_speed, bool increment_statistic))
    IL2CPP_REGISTER_METHOD(0x00FFDE10, void, UpdateUntouchableEffect, (app::SeinHealthController * this_ptr, float prev_health))
    IL2CPP_REGISTER_METHOD(0x00FFE100, void, ConvertEnergy, (app::SeinHealthController * this_ptr, float amount, bool increment_statistic))
    IL2CPP_REGISTER_METHOD(0x00FFE190, void, GainMaxHeartContainer, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFE1F0, void, RestoreAllHealth, (app::SeinHealthController * this_ptr, float visual_fill_speed))
    IL2CPP_REGISTER_METHOD(0x00FFE240, void, TakeDamage, (app::SeinHealthController * this_ptr, float amount, float visual_fill_speed))
    IL2CPP_REGISTER_METHOD(0x00FFE380, void, SetReferenceToSein, (app::SeinHealthController * this_ptr, app::SeinCharacter * sein))
    IL2CPP_REGISTER_METHOD(0x00FFEB30, void, OnGlobalShardsEquip, (app::SeinHealthController * this_ptr, app::PlayerUberStateShards_Shard * shard))
    IL2CPP_REGISTER_METHODINFO(0x04702CA0, SeinHealthController_OnGlobalShardsEquip__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FFEE60, void, OnGlobalShardsUnequip, (app::SeinHealthController * this_ptr, app::PlayerUberStateShards_Shard * shard))
    IL2CPP_REGISTER_METHODINFO(0x0471DD00, SeinHealthController_OnGlobalShardsUnequip__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FFEF00, void, OnGlobalShardsUpdated, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DA00, SeinHealthController_OnGlobalShardsUpdated__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FFEF20, void, OnVitalityShardUpdate, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFF190, void, OnSwapShardUpdate, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFF1F0, void, OnSpiritWellShieldShardUpdate, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FFF4B0, void, Apply, (app::SeinHealthController * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_ApplyOnEditor, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_ApplyOnEditor, (app::SeinHealthController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::IUberState__Array *, get_AffectingUberStates, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_AffectingUberStates, (app::SeinHealthController * this_ptr, app::IUberState__Array * value))
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::SeinHealthController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_AllTargets, (app::SeinHealthController * this_ptr, app::List_1_UnityEngine_GameObject_ * value))
    IL2CPP_REGISTER_METHOD(0x00FFF4F0, void, ctor, (app::SeinHealthController * this_ptr))
}