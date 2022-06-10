#include <interception_macros.h>

namespace app::methods::MovingPlatformsController {
    IL2CPP_REGISTER_METHOD(0x002FB960, void, ctor, (app::MovingPlatformsController * this_ptr, app::PlatformMovement * platform_movement))
    IL2CPP_REGISTER_METHOD(0x008704E0, void, DetachFromAll, (app::MovingPlatformsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00870520, void, UpdateMovingPlatform, (app::MovingPlatformsController * this_ptr, app::CharacterPlatformMovement * character_platform_movement))
    IL2CPP_REGISTER_METHOD(0x008720C0, void, OnGroundMovingPlatform, (app::MovingPlatformsController * this_ptr, app::Transform * platform))
    IL2CPP_REGISTER_METHOD(0x00872270, void, OnCeilingMovingPlatform, (app::MovingPlatformsController * this_ptr, app::Transform * platform))
    IL2CPP_REGISTER_METHOD(0x00872440, void, OnWallLeftMovingPlatform, (app::MovingPlatformsController * this_ptr, app::Transform * platform))
    IL2CPP_REGISTER_METHOD(0x00872610, void, OnWallRightMovingPlatform, (app::MovingPlatformsController * this_ptr, app::Transform * platform))
    IL2CPP_REGISTER_METHOD(0x008727E0, void, MoveWithThePlatformWhileSuspended, (app::MovingPlatformsController * this_ptr, float platform_move_threshold))
}