#include <interception_macros.h>

namespace app::methods::ApplyForceOnDamage {
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::ApplyForceOnDamage * this_ptr));
IL2CPP_REGISTER_METHOD(0x00505D80, void, OnRecieveDamage, (app::ApplyForceOnDamage * this_ptr, app::Damage * damage));
IL2CPP_REGISTER_METHOD(0x00506050, void, OnReceiveContext, (app::ApplyForceOnDamage * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x00506160, void, __ctor, (app::ApplyForceOnDamage * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (app::ApplyForceOnDamage * this_ptr));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (app::ApplyForceOnDamage * this_ptr));
}
