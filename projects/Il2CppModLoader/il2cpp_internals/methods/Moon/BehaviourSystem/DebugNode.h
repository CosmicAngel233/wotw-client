#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::DebugNode {
    IL2CPP_REGISTER_METHOD(0x0300CC10, void, OnEnter, (app::DebugNode * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x0300CD00, app::BehaviourStatus__Enum, OnExecute, (app::DebugNode * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x0300CDA0, void, __ctor, (app::DebugNode * this_ptr));
}
