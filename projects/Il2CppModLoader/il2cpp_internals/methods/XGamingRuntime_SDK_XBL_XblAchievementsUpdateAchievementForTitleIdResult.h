#include <interception_macros.h>

namespace app::methods::XGamingRuntime::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult * this_ptr, int32_t hresult));
    IL2CPP_REGISTER_METHOD(0x030BAAB0, app::IAsyncResult *, BeginInvoke, (app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult * this_ptr, int32_t hresult, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SDK_XBL_XblAchievementsUpdateAchievementForTitleIdResult * this_ptr, app::IAsyncResult * result));
}
