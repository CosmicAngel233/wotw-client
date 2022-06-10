#include <interception_macros.h>

namespace app::methods::KuPushWall {
    IL2CPP_REGISTER_METHOD(0x01245850, void, OnSetReferenceToKu, (app::KuPushWall * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01234B30, bool, get_IsStatePerforming, (app::KuPushWall * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01245880, void, UpdateState, (app::KuPushWall * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01245A40, bool, ShouldPlayPushWall, (app::KuPushWall * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04776078, KuPushWall_ShouldPlayPushWall__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::KuPushWall * this_ptr));
}