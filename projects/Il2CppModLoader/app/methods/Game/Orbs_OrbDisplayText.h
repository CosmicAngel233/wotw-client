#include <interception_macros.h>

namespace app::methods::Game::Orbs_OrbDisplayText {
    IL2CPP_REGISTER_METHOD(0x015267E0, app::GameObject *, get_OrbText, ())
    IL2CPP_REGISTER_METHOD(0x01526870, void, LoadOrbText, ())
    IL2CPP_REGISTER_METHOD(0x015269A0, app::ExpText *, Create, (app::Transform * target, app::Vector3 offset, int32_t value))
}