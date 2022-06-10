#include <interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineContext {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MoonTimeline *, get_ContainingTimeline, (app::TimelineContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ContainingTimeline, (app::TimelineContext * this_ptr, app::MoonTimeline * value));
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsSkippable, (app::TimelineContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsSkippable, (app::TimelineContext * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::TimelineContext * this_ptr));
}