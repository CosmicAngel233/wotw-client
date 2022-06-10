#include <interception_macros.h>

namespace app::methods::Moon::RammingBehaviour_KnockbackState {
    IL2CPP_REGISTER_METHOD(0x00C525C0, void, __ctor, (app::RammingBehaviour_KnockbackState * this_ptr, app::RammingBehaviour * behaviour));
    IL2CPP_REGISTER_METHOD(0x00C52B70, void, OnEnter, (app::RammingBehaviour_KnockbackState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RammingBehaviour_KnockbackState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C52E00, void, OnExit, (app::RammingBehaviour_KnockbackState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C52E30, void, OnKnockbackEnded, (app::RammingBehaviour_KnockbackState * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047933C0, RammingBehaviour_KnockbackState_OnKnockbackEnded__MethodInfo);
}