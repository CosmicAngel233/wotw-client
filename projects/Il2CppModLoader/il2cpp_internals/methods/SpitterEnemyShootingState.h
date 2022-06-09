#include <interception_macros.h>

namespace app::methods::SpitterEnemyShootingState {
IL2CPP_REGISTER_METHOD(0x004C1E90, void, __ctor, (app::SpitterEnemyShootingState * this_ptr, app::SpitterEnemy * enemy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::SpitterEnemyShootingState * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A0360, void, OnEnter, (app::SpitterEnemyShootingState * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A0370, void, ShootProjectile, (app::SpitterEnemyShootingState * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A08D0, Vector3, get_ProjectileSpawnerPositionToPlayerPosition, (app::SpitterEnemyShootingState * this_ptr));
IL2CPP_REGISTER_METHOD(0x009A0AC0, void, SpawnProjectile, (app::SpitterEnemyShootingState * this_ptr, app::Vector3 speed));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SpitterEnemyShootingState * this_ptr));
}
