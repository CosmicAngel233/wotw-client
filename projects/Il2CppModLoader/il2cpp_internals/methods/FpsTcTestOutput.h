#include <interception_macros.h>

namespace app::methods::FpsTcTestOutput {
IL2CPP_REGISTER_METHOD(0x01636C40, void, __ctor, (app::FpsTcTestOutput * this_ptr));
IL2CPP_REGISTER_METHOD(0x01637070, void, Write, (app::FpsTcTestOutput * this_ptr, app::FPSTestResult * test_result));
IL2CPP_REGISTER_METHOD(0x01637510, void, Close, (app::FpsTcTestOutput * this_ptr));
}
