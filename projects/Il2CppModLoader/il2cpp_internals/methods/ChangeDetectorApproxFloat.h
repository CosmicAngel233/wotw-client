#include <interception_macros.h>

namespace app::methods::ChangeDetectorApproxFloat {
IL2CPP_REGISTER_METHOD(0x006D39E0, void, __ctor, (app::ChangeDetectorApproxFloat * this_ptr, float epsilon, float last_value));
IL2CPP_REGISTER_METHOD(0x010457B0, bool, CheckValueChanged, (app::ChangeDetectorApproxFloat * this_ptr, float t));
}
