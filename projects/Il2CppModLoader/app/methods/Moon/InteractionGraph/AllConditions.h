#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::AllConditions {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_1, (app::AllConditions * this_ptr, app::ICondition__Array * conditions))
    IL2CPP_REGISTER_METHOD(0x0198AB10, void, ctor_2, (app::AllConditions * this_ptr, app::Func_1_Boolean___Array * conditions))
    IL2CPP_REGISTER_METHOD(0x0198ADB0, bool, Validate, (app::AllConditions * this_ptr, app::IContext * context))
}