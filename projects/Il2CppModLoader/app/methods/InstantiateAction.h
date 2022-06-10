#include <interception_macros.h>

namespace app::methods::InstantiateAction {
    IL2CPP_REGISTER_METHOD(0x003FF2B0, int32_t, GetPrewarmAmount, (app::InstantiateAction * this_ptr, app::GameObject * entry))
    IL2CPP_REGISTER_METHOD(0x0062BD70, void, Perform, (app::InstantiateAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0062C2D0, app::String *, GetNiceName, (app::InstantiateAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0062C3E0, bool, MakeInstanceFollowTarget, (app::InstantiateAction * this_ptr, app::GameObject * instance, app::Transform * target))
    IL2CPP_REGISTER_METHOD(0x0062C4E0, void, ctor, (app::InstantiateAction * this_ptr))
}