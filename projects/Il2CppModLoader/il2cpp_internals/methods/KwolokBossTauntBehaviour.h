#include <interception_macros.h>

namespace app::methods::KwolokBossTauntBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsLocomotionFollowAllowed, (app::KwolokBossTauntBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012EB7D0, void, OnEnter, (app::KwolokBossTauntBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x012EBA20, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossTauntBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x012EBAA0, void, OnExit, (app::KwolokBossTauntBehaviour * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x012EBC80, void, InitializeHitReactionController, (app::KwolokBossTauntBehaviour * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012EBDF0, void, OnDamageReceived, (app::KwolokBossTauntBehaviour * this_ptr, app::DamageResult damage));
    IL2CPP_REGISTER_METHODINFO(0x0478E118, KwolokBossTauntBehaviour_OnDamageReceived__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x012EBE30, void, __ctor, (app::KwolokBossTauntBehaviour * this_ptr));
}