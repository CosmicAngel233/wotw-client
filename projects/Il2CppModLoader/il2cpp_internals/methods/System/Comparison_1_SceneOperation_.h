#include <interception_macros.h>

namespace app::methods::System::Comparison_1_SceneOperation_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_SceneOperation_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_SceneOperation_ * this_ptr, app::SceneOperation x, app::SceneOperation y));
    IL2CPP_REGISTER_METHOD(0x02C7BA10, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_SceneOperation_ * this_ptr, app::SceneOperation x, app::SceneOperation y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_SceneOperation_ * this_ptr, app::IAsyncResult * result));
}