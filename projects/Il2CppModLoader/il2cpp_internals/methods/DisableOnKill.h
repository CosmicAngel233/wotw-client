#include <interception_macros.h>

namespace app::methods::DisableOnKill {
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnKill, (app::DisableOnKill * this_ptr, app::Vector2 direction));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::DisableOnKill * this_ptr));
}