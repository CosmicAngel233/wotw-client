#include <interception_macros.h>

namespace app::methods::ProtectiveLightCone {
    IL2CPP_REGISTER_METHOD(0x00C7DE20, bool, IsPointUnderLight, (app::Vector2 point));
    IL2CPP_REGISTER_METHOD(0x00C7E030, void, OnActivate, (app::ProtectiveLightCone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C7E1A0, void, OnDeactivate, (app::ProtectiveLightCone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C7E310, bool, ContainsPoint, (app::ProtectiveLightCone * this_ptr, app::Vector2 point));
    IL2CPP_REGISTER_METHOD(0x00C7E790, int32_t, SideOfLine, (app::Vector2 a, app::Vector2 b, app::Vector2 point));
    IL2CPP_REGISTER_METHOD(0x00C7E880, void, __ctor, (app::ProtectiveLightCone * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C7E930, void, __cctor, ());
}