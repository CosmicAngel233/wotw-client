#include <interception_macros.h>

namespace app::methods::PlatformMovementListOfColliders {
    IL2CPP_REGISTER_METHOD(0x01170090, void, Start, (app::PlatformMovementListOfColliders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011704E0, void, OnDestroy, (app::PlatformMovementListOfColliders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01170930, void, Serialize, (app::PlatformMovementListOfColliders * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x01170A90, app::Collider *, get_GroundCollider, (app::PlatformMovementListOfColliders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01170B40, app::Collider *, get_CeilingCollider, (app::PlatformMovementListOfColliders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01170BF0, app::Collider *, get_WallLeftCollider, (app::PlatformMovementListOfColliders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01170CA0, app::Collider *, get_WallRightCollider, (app::PlatformMovementListOfColliders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01170D50, void, OnCollisionGroundEvent, (app::PlatformMovementListOfColliders * this_ptr, app::Vector3 normal, app::Collider * collider))
    IL2CPP_REGISTER_METHODINFO(0x047095E0, PlatformMovementListOfColliders_OnCollisionGroundEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01170E10, void, OnCollisionCeilingEvent, (app::PlatformMovementListOfColliders * this_ptr, app::Vector3 normal, app::Collider * collider))
    IL2CPP_REGISTER_METHODINFO(0x04749A38, PlatformMovementListOfColliders_OnCollisionCeilingEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01170ED0, void, OnCollisionWallLeftEvent, (app::PlatformMovementListOfColliders * this_ptr, app::Vector3 normal, app::Collider * collider))
    IL2CPP_REGISTER_METHODINFO(0x0470F088, PlatformMovementListOfColliders_OnCollisionWallLeftEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01170F90, void, OnCollisionWallRightEvent, (app::PlatformMovementListOfColliders * this_ptr, app::Vector3 normal, app::Collider * collider))
    IL2CPP_REGISTER_METHODINFO(0x04779E58, PlatformMovementListOfColliders_OnCollisionWallRightEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01171050, void, FixedUpdate, (app::PlatformMovementListOfColliders * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01171190, void, ctor, (app::PlatformMovementListOfColliders * this_ptr))
}