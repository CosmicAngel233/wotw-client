#include <interception_macros.h>

namespace app::methods::UberBehaviourTree::StateNode {
    IL2CPP_REGISTER_METHOD(0x013DF6E0, void, __ctor, (app::StateNode * this_ptr, app::String * name, app::IBehaviourState * state));
    IL2CPP_REGISTER_METHOD(0x013E3730, app::BehaviourTreeStatus__Enum, Tick, (app::StateNode * this_ptr, app::TickData tick));
}
