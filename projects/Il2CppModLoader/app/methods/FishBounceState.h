#include <interception_macros.h>

namespace app::methods::FishBounceState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FishBounceState * this_ptr, app::FishEnemy * fish))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::FishBounceState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::FishBounceState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::FishBounceState * this_ptr))
}