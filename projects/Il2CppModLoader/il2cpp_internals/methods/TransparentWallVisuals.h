#include <interception_macros.h>

namespace app::methods::TransparentWallVisuals {
    IL2CPP_REGISTER_METHOD(0x00B0F190, void, OnTriggerEnter, (app::TransparentWallVisuals * this_ptr, app::Collider * collider));
    IL2CPP_REGISTER_METHOD(0x00B0F280, void, OnTriggerStay, (app::TransparentWallVisuals * this_ptr, app::Collider * collider));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::TransparentWallVisuals * this_ptr));
}
