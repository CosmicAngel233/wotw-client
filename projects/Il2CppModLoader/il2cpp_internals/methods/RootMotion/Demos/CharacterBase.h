#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::CharacterBase {
    IL2CPP_REGISTER_METHOD(0x022100A0, app::Vector3, GetGravity, (app::CharacterBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022103A0, void, Start, (app::CharacterBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02210910, app::RaycastHit, GetSpherecastHit, (app::CharacterBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02210ED0, float, GetAngleFromForward, (app::CharacterBase * this_ptr, app::Vector3 world_direction));
    IL2CPP_REGISTER_METHOD(0x02211060, void, RigidbodyRotateAround, (app::CharacterBase * this_ptr, app::Vector3 point, app::Vector3 axis, float angle));
    IL2CPP_REGISTER_METHOD(0x02211580, void, ScaleCapsule, (app::CharacterBase * this_ptr, float mlp));
    IL2CPP_REGISTER_METHOD(0x02211950, void, HighFriction, (app::CharacterBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022119C0, void, ZeroFriction, (app::CharacterBase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02211A30, float, GetSlopeDamper, (app::CharacterBase * this_ptr, app::Vector3 velocity, app::Vector3 ground_normal));
    IL2CPP_REGISTER_METHOD(0x02211B90, void, __ctor, (app::CharacterBase * this_ptr));
}