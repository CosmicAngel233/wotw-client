#include <interception_macros.h>

namespace app::methods::SlugDamageReciever {
    IL2CPP_REGISTER_METHOD(0x006C5340, void, OnRecieveDamage, (app::SlugDamageReciever * this_ptr, app::Damage * damage));
    IL2CPP_REGISTER_METHOD(0x006C5370, void, __ctor, (app::SlugDamageReciever * this_ptr));
}
