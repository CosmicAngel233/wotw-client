#include <interception_macros.h>

namespace app::methods::VSyncUtility {
    IL2CPP_REGISTER_METHOD(0x00482AA0, int32_t, get_vSyncCount, ());
    IL2CPP_REGISTER_METHOD(0x013B7CA0, void, set_vSyncCount, (int32_t value));
    IL2CPP_REGISTER_METHOD(0x013B7D80, void, OverrideVsyncCount, (int32_t value));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::VSyncUtility * this_ptr));
}