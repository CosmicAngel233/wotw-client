#include <interception_macros.h>

namespace app::methods::FallOverride {
    IL2CPP_REGISTER_METHOD(0x00996820, void, Override, (app::FallOverride * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00996990, void, Revert, (app::FallOverride * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::FallOverride * this_ptr));
}
