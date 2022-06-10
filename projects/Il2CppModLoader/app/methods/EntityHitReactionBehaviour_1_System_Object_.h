#include <interception_macros.h>

namespace app::methods::EntityHitReactionBehaviour_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_HasLocomotion, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C14D0, void, set_HasLocomotion, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr, app::DamageType__Enum type))
    IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr, app::Vector2 force, app::DamageWeight__Enum damage_weight))
    IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr, app::DamageWeight__Enum weight))
    IL2CPP_REGISTER_METHOD(0x019E1830, void, ctor, (app::EntityHitReactionBehaviour_1_System_Object_ * this_ptr))
}