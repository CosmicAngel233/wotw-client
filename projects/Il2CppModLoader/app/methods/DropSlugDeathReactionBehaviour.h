#include <interception_macros.h>

namespace app::methods::DropSlugDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00BE0FB0, void, OnEnterTask, (app::DropSlugDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecuteTask, (app::DropSlugDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00BE1080, void, ctor, (app::DropSlugDeathReactionBehaviour * this_ptr))
}
