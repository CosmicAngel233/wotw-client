#include <interception_macros.h>

namespace app::methods::Moon::SceneUberStateGroup {
    IL2CPP_REGISTER_METHOD(0x01B65140, void, __ctor, (app::SceneUberStateGroup * this_ptr, app::String * scene_path));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::UberID *, get_ID, (app::SceneUberStateGroup * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01B65290, app::String *, get_GroupName, (app::SceneUberStateGroup * this_ptr));
}
