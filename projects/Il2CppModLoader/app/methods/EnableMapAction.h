#include <interception_macros.h>

namespace app::methods::EnableMapAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::EnableMapAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00BFC810, app::String *, GetNiceName, (app::EnableMapAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::EnableMapAction * this_ptr))
}
