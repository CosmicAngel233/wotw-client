#include <interception_macros.h>

namespace app::methods::SetSeinColliderHeight {
    IL2CPP_REGISTER_METHOD(0x005A4240, void, Perform, (app::SetSeinColliderHeight * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x005A4360, app::String *, GetNiceName, (app::SetSeinColliderHeight * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::SetSeinColliderHeight * this_ptr));
}
