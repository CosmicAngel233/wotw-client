#include <interception_macros.h>

namespace app::methods::WidgetUIHorizontalSelect {
    IL2CPP_REGISTER_METHOD(0x00573CF0, void, SetNames, (app::WidgetUIHorizontalSelect * this_ptr, app::String__Array * names));
    IL2CPP_REGISTER_METHOD(0x00574070, void, FixedUpdate, (app::WidgetUIHorizontalSelect * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00574660, void, SnapToIndex, (app::WidgetUIHorizontalSelect * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x005747A0, void, SelectIndex, (app::WidgetUIHorizontalSelect * this_ptr, int32_t index, bool instant));
    IL2CPP_REGISTER_METHOD(0x00574840, void, __ctor, (app::WidgetUIHorizontalSelect * this_ptr));
}
