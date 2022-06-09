#include <interception_macros.h>

namespace app::methods::UberBehaviourTree::ParallelNode {
IL2CPP_REGISTER_METHOD(0x013E2A90, void, __ctor, (app::ParallelNode_1 * this_ptr, app::String * name, int32_t num_required_to_fail, int32_t num_required_to_succeed));
IL2CPP_REGISTER_METHOD(0x013E2C00, BehaviourTreeStatus__Enum, Tick, (app::ParallelNode_1 * this_ptr, app::TickData tick));
IL2CPP_REGISTER_METHOD(0x013E2E50, void, AddChild, (app::ParallelNode_1 * this_ptr, app::IBehaviourTreeNode * child));
}
