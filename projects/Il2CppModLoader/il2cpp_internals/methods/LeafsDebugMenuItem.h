#include <interception_macros.h>

namespace app::methods::LeafsDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x015C26D0, void, __ctor, (app::LeafsDebugMenuItem * this_ptr, app::String * path, app::String * str));
    IL2CPP_REGISTER_METHOD(0x015C2890, void, OnSelectedFixedUpdate, (app::LeafsDebugMenuItem * this_ptr));
}
