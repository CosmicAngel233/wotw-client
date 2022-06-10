#include <interception_macros.h>

namespace app::methods::TimedDoor {
    IL2CPP_REGISTER_METHOD(0x010F3C70, void, Awake, (app::TimedDoor * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0090CE60, void, Serialize, (app::TimedDoor * this_ptr, app::Archive * ar));
    IL2CPP_REGISTER_METHOD(0x010F3D10, void, OpenTheDoor, (app::TimedDoor * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010F3D50, void, CloseTheDoor, (app::TimedDoor * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010F3E60, void, PuzzleSolved, (app::TimedDoor * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::TimedDoor * this_ptr));
}