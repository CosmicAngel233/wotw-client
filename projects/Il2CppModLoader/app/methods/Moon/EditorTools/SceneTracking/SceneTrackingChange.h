#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::EditorTools::SceneTracking::SceneTrackingChange {
    IL2CPP_REGISTER_METHOD(0x01209560, void, ctor, (app::SceneTrackingChange * this_ptr, app::SceneTracking * scene_tracking))
    IL2CPP_REGISTER_METHOD(0x01209710, app::String *, GetTimestamp, (app::DateTime value))
}
