#include <interception_macros.h>

namespace app::methods::WindCollision {
    IL2CPP_REGISTER_METHOD(0x00575560, void, Awake, (app::WindCollision * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005756C0, void, OnEnable, (app::WindCollision * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00575770, void, OnTriggerEnter, (app::WindCollision * this_ptr, app::Collider * col));
    IL2CPP_REGISTER_METHOD(0x00575CD0, void, PerformKnockback, (app::WindCollision * this_ptr, app::GameObject * go, app::DamageOwner * damage_owner, app::AnimationCurve * distance_to_knockback));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::WindCollision * this_ptr));
}