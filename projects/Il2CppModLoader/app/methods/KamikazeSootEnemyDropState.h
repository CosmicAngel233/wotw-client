#include <interception_macros.h>

namespace app::methods::KamikazeSootEnemyDropState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::KamikazeSootEnemyDropState * this_ptr, app::KamikazeSootEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x00E63BA0, void, UpdateState, (app::KamikazeSootEnemyDropState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E63C90, void, OnEnter, (app::KamikazeSootEnemyDropState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::KamikazeSootEnemyDropState * this_ptr))
}