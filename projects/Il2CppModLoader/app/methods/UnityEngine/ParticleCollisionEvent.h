#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::ParticleCollisionEvent {
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_intersection, (app::ParticleCollisionEvent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_normal, (app::ParticleCollisionEvent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00247080, app::Vector3, get_velocity, (app::ParticleCollisionEvent__Boxed * this_ptr))
}
