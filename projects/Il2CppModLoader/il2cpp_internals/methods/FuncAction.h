#include <interception_macros.h>

namespace app::methods::FuncAction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::FuncAction * this_ptr, app::Action* action));
    IL2CPP_REGISTER_METHOD(0x013E0070, void, Perform, (app::FuncAction * this_ptr, app::IContext* context));
} // namespace app::methods::FuncAction
