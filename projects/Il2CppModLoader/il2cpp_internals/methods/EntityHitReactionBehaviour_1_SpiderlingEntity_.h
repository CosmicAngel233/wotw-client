#include <interception_macros.h>

namespace app::methods::EntityHitReactionBehaviour_1_SpiderlingEntity_ {
    IL2CPP_REGISTER_METHOD(0x019E0DF0, void, OnInitializeTask, (app::EntityHitReactionBehaviour_1_SpiderlingEntity_ * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHODINFO(0x0477E2D8, EntityHitReactionBehaviour_1_SpiderlingEntity__OnInitializeTask__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019E1460, void, ApplyExternalKickbackForce, (app::EntityHitReactionBehaviour_1_SpiderlingEntity_ * this_ptr, app::Vector2 force, app::DamageWeight__Enum damage_weight));
    IL2CPP_REGISTER_METHODINFO(0x04710798, EntityHitReactionBehaviour_1_SpiderlingEntity__ApplyExternalKickbackForce__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019E1830, void, __ctor, (app::EntityHitReactionBehaviour_1_SpiderlingEntity_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04717230, EntityHitReactionBehaviour_1_SpiderlingEntity___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019E11F0, bool, CanInterrupt, (app::EntityHitReactionBehaviour_1_SpiderlingEntity_ * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
    IL2CPP_REGISTER_METHOD(0x019E13C0, bool, IsDamageTypePreventingInterruption, (app::EntityHitReactionBehaviour_1_SpiderlingEntity_ * this_ptr, app::DamageType__Enum type));
    IL2CPP_REGISTER_METHOD(0x019E1820, bool, IsInterruptingDamageWeight, (app::EntityHitReactionBehaviour_1_SpiderlingEntity_ * this_ptr, app::DamageWeight__Enum weight));
}