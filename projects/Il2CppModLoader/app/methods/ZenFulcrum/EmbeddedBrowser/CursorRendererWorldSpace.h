#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::CursorRendererWorldSpace {
    IL2CPP_REGISTER_METHOD(0x01DD2740, void, Awake, (app::CursorRendererWorldSpace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD2E00, void, CursorChange, (app::CursorRendererWorldSpace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD3140, void, LateUpdate, (app::CursorRendererWorldSpace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD3500, void, OnDestroy, (app::CursorRendererWorldSpace * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD35B0, void, ctor, (app::CursorRendererWorldSpace * this_ptr))
}
