#include <interception_macros.h>

namespace app::methods::DynamicLightsManager {
IL2CPP_REGISTER_METHOD(0x00BEC850, SceneRoot *, SceneRootFromPosition, (app::DynamicLightsManager * this_ptr, app::Vector3 position));
IL2CPP_REGISTER_METHOD(0x00BEC950, void, OnRenderObject, (app::DynamicLightsManager * this_ptr));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::DynamicLightsManager * this_ptr));
}
