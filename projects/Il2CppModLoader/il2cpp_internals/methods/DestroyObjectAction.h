#include <interception_macros.h>

namespace app::methods::DestroyObjectAction {
    IL2CPP_REGISTER_METHOD(0x00B8C140, void, Perform, (app::DestroyObjectAction * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00B8C1E0, app::String *, GetNiceName, (app::DestroyObjectAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::GameObject *, GetDynamicGraphicTarget, (app::DestroyObjectAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::DestroyObjectAction * this_ptr));
}