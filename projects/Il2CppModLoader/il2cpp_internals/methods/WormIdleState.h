#include <interception_macros.h>

namespace app::methods::WormIdleState {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::WormIdleState * this_ptr, app::WormEnemy * worm, app::TextureAnimationWithTransitions * idle));
    IL2CPP_REGISTER_METHOD(0x0058EE50, void, OnEnter, (app::WormIdleState * this_ptr));
}