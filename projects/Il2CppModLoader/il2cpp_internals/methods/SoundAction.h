#include <interception_macros.h>

namespace app::methods::SoundAction {
    IL2CPP_REGISTER_METHOD(0x00EE4B60, void, Perform, (app::SoundAction * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x00EE4D80, app::String *, get_TargetName, (app::SoundAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00EE4E60, app::String *, GetNiceName, (app::SoundAction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::SoundAction * this_ptr));
}