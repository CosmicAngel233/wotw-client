#include <interception_macros.h>

namespace app::methods::TurtleScreamBehaviour {
IL2CPP_REGISTER_METHOD(0x013D8950, void, OnExecute, (app::TurtleScreamBehaviour * this_ptr, app::IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x013D8A00, void, OnUpdateBehaviour, (app::TurtleScreamBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x013D8AB0, void, OnEndBehaviour, (app::TurtleScreamBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (app::TurtleScreamBehaviour * this_ptr));
}
