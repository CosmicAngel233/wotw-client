#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::Action {
    IL2CPP_REGISTER_METHOD(0x03002000, bool, ExecuteAction, (app::Action_1 * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, (app::Action_1 * this_ptr))
}
