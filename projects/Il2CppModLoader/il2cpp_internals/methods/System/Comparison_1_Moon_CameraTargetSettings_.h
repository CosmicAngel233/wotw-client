#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Moon_CameraTargetSettings_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_Moon_CameraTargetSettings_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02B86EB0, int32_t, Invoke, (app::Comparison_1_Moon_CameraTargetSettings_ * this_ptr, app::CameraTargetSettings x, app::CameraTargetSettings y));
    IL2CPP_REGISTER_METHOD(0x02B8AB80, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Moon_CameraTargetSettings_ * this_ptr, app::CameraTargetSettings x, app::CameraTargetSettings y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_CameraTargetSettings_ * this_ptr, app::IAsyncResult * result));
}