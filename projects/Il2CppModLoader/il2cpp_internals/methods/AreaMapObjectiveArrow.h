#include <interception_macros.h>

namespace app::methods::AreaMapObjectiveArrow {
    IL2CPP_REGISTER_METHOD(0x0083A0A0, void, OnEnable, (app::AreaMapObjectiveArrow * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0083A100, void, FixedUpdate, (app::AreaMapObjectiveArrow * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0083A9D0, app::Vector2, ProjectOnRect, (app::AreaMapObjectiveArrow * this_ptr, app::Rect rect, app::Vector2 center, app::Vector2 direction));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::AreaMapObjectiveArrow * this_ptr));
}