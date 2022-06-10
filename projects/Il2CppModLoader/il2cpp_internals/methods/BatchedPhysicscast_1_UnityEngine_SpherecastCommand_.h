#include <interception_macros.h>

namespace app::methods::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0471F740, BatchedPhysicscast_1_UnityEngine_SpherecastCommand___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019D8090, void, Init, (app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHODINFO(0x0472F090, BatchedPhysicscast_1_UnityEngine_SpherecastCommand__Init__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019D7DF0, bool, get_IsComplete, (app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04715668, BatchedPhysicscast_1_UnityEngine_SpherecastCommand__get_IsComplete__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019D7EB0, void, CompleteJob, (app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0474FE38, BatchedPhysicscast_1_UnityEngine_SpherecastCommand__CompleteJob__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019D7E50, void, ScheduleJob, (app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ * this_ptr, app::SpherecastCommand__Array * commands));
    IL2CPP_REGISTER_METHODINFO(0x047678F8, BatchedPhysicscast_1_UnityEngine_SpherecastCommand__ScheduleJob__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019D8190, void, GetResults, (app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ * this_ptr, app::RaycastHit__Array * results));
    IL2CPP_REGISTER_METHODINFO(0x0475FD88, BatchedPhysicscast_1_UnityEngine_SpherecastCommand__GetResults__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x019D8230, void, Dispose, (app::BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04729B98, BatchedPhysicscast_1_UnityEngine_SpherecastCommand__Dispose__MethodInfo);
}