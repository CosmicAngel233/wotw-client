#include <interception_macros.h>

namespace app::methods::Moon_Timeline::CaptureData {
IL2CPP_REGISTER_METHOD(0x010CAB50, CaptureData *, Create, (int32_t captured_frames, app::String * shot_name, int32_t cross_fade_time, bool flip_in_x));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CaptureData * this_ptr));
}
