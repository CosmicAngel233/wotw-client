#include <interception_macros.h>

namespace app::methods::JumperEnemyIdleState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::JumperEnemyIdleState * this_ptr, app::JumperEnemy * enemy))
    IL2CPP_REGISTER_METHOD(0x00E58EB0, void, UpdateState, (app::JumperEnemyIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E58F20, void, OnEnter, (app::JumperEnemyIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E58FC0, void, OnExit, (app::JumperEnemyIdleState * this_ptr))
}