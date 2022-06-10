#include <interception_macros.h>

namespace app::methods::ForceGrabReleaseZone {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::ForceGrabReleaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01280470, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01280540, bool, InsideZone, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x01280710, void, Awake, (app::ForceGrabReleaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01280920, void, OnDestroy, (app::ForceGrabReleaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ForceGrabReleaseZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01280A00, void, cctor, ())
}