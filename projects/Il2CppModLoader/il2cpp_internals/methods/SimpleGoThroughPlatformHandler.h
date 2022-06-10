#include <interception_macros.h>

namespace app::methods::SimpleGoThroughPlatformHandler {
    IL2CPP_REGISTER_METHOD(0x00748010, void, Update, (app::SimpleGoThroughPlatformHandler * this_ptr, app::Collider * collider, float check_distance));
    IL2CPP_REGISTER_METHOD(0x00748290, void, ProcessRay, (app::SimpleGoThroughPlatformHandler * this_ptr, app::Vector3 origin_point, app::Collider * collider, float check_distance));
    IL2CPP_REGISTER_METHOD(0x007485E0, void, DrawGizmo, (app::SimpleGoThroughPlatformHandler * this_ptr, app::Bounds collider_bounds, float check_distance));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::SimpleGoThroughPlatformHandler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x007486C0, void, __cctor, ());
}