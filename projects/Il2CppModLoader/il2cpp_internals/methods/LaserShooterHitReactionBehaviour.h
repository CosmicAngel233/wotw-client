#include <interception_macros.h>

namespace app::methods::LaserShooterHitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F13C60, void, HandleReasonToNotInterrupt, (app::LaserShooterHitReactionBehaviour * this_ptr, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt reason, app::EntityEvent * reaction_event));
    IL2CPP_REGISTER_METHOD(0x00F13E60, void, OnEnterTask, (app::LaserShooterHitReactionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecuteTask, (app::LaserShooterHitReactionBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00F13F80, void, __ctor, (app::LaserShooterHitReactionBehaviour * this_ptr));
}