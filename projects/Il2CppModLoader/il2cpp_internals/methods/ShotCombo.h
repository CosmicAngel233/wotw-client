#include <interception_macros.h>

namespace app::methods::ShotCombo {
IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_CurrentShot, (ShotCombo * __this));
IL2CPP_REGISTER_METHOD(0x005C4000, void, set_CurrentShot, (ShotCombo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CanShoot, (ShotCombo * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_CanShoot, (ShotCombo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005C4010, void, Update, (ShotCombo * __this, float dt));
IL2CPP_REGISTER_METHOD(0x005C4050, void, UpdateState, (ShotCombo * __this));
IL2CPP_REGISTER_METHOD(0x005C4090, void, Shoot, (ShotCombo * __this));
IL2CPP_REGISTER_METHOD(0x005C40A0, void, __ctor, (ShotCombo * __this));
}
