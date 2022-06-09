#include <interception_macros.h>

namespace app::methods::RotatingObstacleLogic {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::RotatingObstacleLogic * this_ptr));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::RotatingObstacleLogic * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, SuspendableMask__Enum, get_Mask, (app::RotatingObstacleLogic * this_ptr));
IL2CPP_REGISTER_METHOD(0x0136F5F0, void, set_Mask, (app::RotatingObstacleLogic * this_ptr, app::SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, IMoonSetupAnimator *, get_MoonSetupAnimator, (app::RotatingObstacleLogic * this_ptr));
IL2CPP_REGISTER_METHOD(0x0136F6A0, void, set_MoonSetupAnimator, (app::RotatingObstacleLogic * this_ptr, app::IMoonSetupAnimator * value));
IL2CPP_REGISTER_METHOD(0x0136F770, void, Awake, (app::RotatingObstacleLogic * this_ptr));
IL2CPP_REGISTER_METHOD(0x0136F810, void, OnDestroy, (app::RotatingObstacleLogic * this_ptr));
IL2CPP_REGISTER_METHOD(0x0136F8B0, void, FixedUpdate, (app::RotatingObstacleLogic * this_ptr));
IL2CPP_REGISTER_METHOD(0x0136FAC0, void, __ctor, (app::RotatingObstacleLogic * this_ptr));
}
