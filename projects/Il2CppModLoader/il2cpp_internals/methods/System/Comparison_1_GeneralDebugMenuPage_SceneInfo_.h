#include <interception_macros.h>

namespace app::methods::System::Comparison_1_GeneralDebugMenuPage_SceneInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_GeneralDebugMenuPage_SceneInfo_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHODINFO(0x0473F680, Comparison_1_GeneralDebugMenuPage_SceneInfo___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_GeneralDebugMenuPage_SceneInfo_ * this_ptr, app::GeneralDebugMenuPage_SceneInfo x, app::GeneralDebugMenuPage_SceneInfo y));
    IL2CPP_REGISTER_METHOD(0x02B88A70, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_GeneralDebugMenuPage_SceneInfo_ * this_ptr, app::GeneralDebugMenuPage_SceneInfo x, app::GeneralDebugMenuPage_SceneInfo y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_GeneralDebugMenuPage_SceneInfo_ * this_ptr, app::IAsyncResult * result));
}