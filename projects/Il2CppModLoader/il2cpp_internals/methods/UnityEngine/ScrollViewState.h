#include <interception_macros.h>

namespace app::methods::UnityEngine::ScrollViewState {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ScrollViewState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029F9B60, void, ScrollTo, (app::ScrollViewState * this_ptr, app::Rect pos));
    IL2CPP_REGISTER_METHOD(0x029F9B90, bool, ScrollTowards, (app::ScrollViewState * this_ptr, app::Rect pos, float max_delta));
    IL2CPP_REGISTER_METHOD(0x029F9DE0, app::Vector2, ScrollNeeded, (app::ScrollViewState * this_ptr, app::Rect pos));
}