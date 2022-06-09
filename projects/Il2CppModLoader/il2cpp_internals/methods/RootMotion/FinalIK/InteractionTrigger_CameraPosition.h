#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionTrigger_CameraPosition {
    IL2CPP_REGISTER_METHOD(0x02A163D0, app::Quaternion, GetRotation, (app::InteractionTrigger_CameraPosition * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02A16750, bool, IsInRange, (app::InteractionTrigger_CameraPosition * this_ptr, app::Transform * raycast_from, app::RaycastHit hit, app::Transform * trigger, float * error));
    IL2CPP_REGISTER_METHOD(0x02A16A80, void, __ctor, (app::InteractionTrigger_CameraPosition * this_ptr));
}
