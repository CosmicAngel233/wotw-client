#include <interception_macros.h>

namespace app::methods::HornBugIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExecute, (app::HornBugIdleBehaviour * this_ptr, app::IBlackboard * blackboard))
    IL2CPP_REGISTER_METHOD(0x00B6D1A0, void, OnUpdateBehaviour, (app::HornBugIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6D260, void, ctor, (app::HornBugIdleBehaviour * this_ptr))
}