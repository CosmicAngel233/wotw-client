#pragma once
#include <interception_macros.h>

namespace app::methods::SceneBoundary {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRenderGizmo, (app::SceneBoundary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00937440, void, ctor, (app::SceneBoundary * this_ptr))
}
