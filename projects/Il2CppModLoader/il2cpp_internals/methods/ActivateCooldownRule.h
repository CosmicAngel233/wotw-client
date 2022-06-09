#include <interception_macros.h>

namespace app::methods::ActivateCooldownRule {
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_CurrentCooldown, (app::ActivateCooldownRule * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_CurrentCooldown, (app::ActivateCooldownRule * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x002FBB00, IComboMove *, get_CooldownSourceMove, (app::ActivateCooldownRule * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_CooldownSourceMove, (app::ActivateCooldownRule * this_ptr, app::IComboMove * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ActivateCooldownRule * this_ptr));
}
