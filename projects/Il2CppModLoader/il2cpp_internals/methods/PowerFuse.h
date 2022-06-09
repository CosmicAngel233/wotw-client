#include <interception_macros.h>

namespace app::methods::PowerFuse {
    IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (app::PowerFuse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00A64220, Action*, get_OnDestroyed, (app::PowerFuse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00510100, void, set_OnDestroyed, (app::PowerFuse * this_ptr, app::Action* value));
    IL2CPP_REGISTER_METHOD(0x00C6B1B0, void, OnRecieveDamage, (app::PowerFuse * this_ptr, app::Damage* damage));
    IL2CPP_REGISTER_METHOD(0x00C6B1D0, void, SetDead, (app::PowerFuse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C6B2B0, void, SetAlive, (app::PowerFuse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C6B370, bool, IsDead, (app::PowerFuse * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C6B380, void, __ctor, (app::PowerFuse * this_ptr));
} // namespace app::methods::PowerFuse
