#include <interception_macros.h>

namespace app::methods::CreateCheckpointAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::CreateCheckpointAction * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00DB71C0, bool, CanCreateCheckpoint, ());
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::CreateCheckpointAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DB7250, void, __ctor, (app::CreateCheckpointAction * this_ptr));
}