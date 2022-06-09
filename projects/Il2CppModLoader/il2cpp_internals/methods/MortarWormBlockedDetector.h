#include <interception_macros.h>

namespace app::methods::MortarWormBlockedDetector {
    IL2CPP_REGISTER_METHOD(0x0147FAE0, void, OnValidate, (app::MortarWormBlockedDetector * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0147FBC0, void, Awake, (app::MortarWormBlockedDetector * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0147FD30, void, OnTriggerEnter, (app::MortarWormBlockedDetector * this_ptr, app::Collider * collider));
    IL2CPP_REGISTER_METHOD(0x0147FD30, void, OnTriggerStay, (app::MortarWormBlockedDetector * this_ptr, app::Collider * collider));
    IL2CPP_REGISTER_METHOD(0x0147FD40, void, OnTrigger, (app::MortarWormBlockedDetector * this_ptr, app::Collider * collider));
    IL2CPP_REGISTER_METHOD(0x0147FE60, void, FixedUpdate, (app::MortarWormBlockedDetector * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::MortarWormBlockedDetector * this_ptr));
}
