#include <interception_macros.h>

namespace app::methods::ScenesManagerBehaviourStatic {
IL2CPP_REGISTER_METHOD(0x01052D80, Vector2, get_PredictedTargetPosition, (app::ScenesManagerBehaviourStatic * this_ptr));
IL2CPP_REGISTER_METHOD(0x00597B10, ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (app::ScenesManagerBehaviourStatic * this_ptr));
IL2CPP_REGISTER_METHOD(0x0105CE40, void, Update, (app::ScenesManagerBehaviourStatic * this_ptr, bool full_update));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindScenesToLoad, (app::ScenesManagerBehaviourStatic * this_ptr, app::Vector3 position, bool async, bool loading_zones, bool keep_preloaded));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindScenesToUnload, (app::ScenesManagerBehaviourStatic * this_ptr, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (app::ScenesManagerBehaviourStatic * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindScenesToUnloadInternal, (app::ScenesManagerBehaviourStatic * this_ptr, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindScenesToEnable, (app::ScenesManagerBehaviourStatic * this_ptr, bool limit_once, bool async));
IL2CPP_REGISTER_METHOD(0x0105CF00, void, __ctor, (app::ScenesManagerBehaviourStatic * this_ptr));
}
