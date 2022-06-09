#include <interception_macros.h>

namespace app::methods::Moon::Gui::GuiBeginScrollView {
    IL2CPP_REGISTER_METHOD(0x00F28550, app::Vector2, get_Scroll, (app::GuiBeginScrollView * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0111CA50, void, set_Scroll, (app::GuiBeginScrollView * this_ptr, app::Vector2 value));
    IL2CPP_REGISTER_METHOD(0x01988D80, void, __ctor_1, (app::GuiBeginScrollView * this_ptr, app::Vector2 scroll_position));
    IL2CPP_REGISTER_METHOD(0x01988E40, void, __ctor_2, (app::GuiBeginScrollView * this_ptr, app::Vector2 scroll_position, app::GUILayoutOption__Array * options));
    IL2CPP_REGISTER_METHOD(0x01988E90, void, __ctor_3, (app::GuiBeginScrollView * this_ptr, app::Vector2 scroll_position, app::GUIStyle * style));
    IL2CPP_REGISTER_METHOD(0x01988EE0, void, __ctor_4, (app::GuiBeginScrollView * this_ptr, app::Vector2 scroll_position, app::GUIStyle * style, app::GUILayoutOption__Array * options));
    IL2CPP_REGISTER_METHOD(0x01988F30, void, __ctor_5, (app::GuiBeginScrollView * this_ptr, app::Vector2 scroll_position, app::GUIStyle * horizontal_scroll_bar, app::GUIStyle * vertical_scroll_bar));
    IL2CPP_REGISTER_METHOD(0x01989010, void, __ctor_6, (app::GuiBeginScrollView * this_ptr, app::Vector2 scroll_position, bool always_show_horizontal_scroll_bar, bool always_show_vertical_scroll_bar, app::GUIStyle * horizontal_scroll_bar, app::GUIStyle * vertical_scroll_bar));
    IL2CPP_REGISTER_METHOD(0x019891C0, void, __ctor_7, (app::GuiBeginScrollView * this_ptr, app::Vector2 scroll_position, bool always_show_horizontal_scroll_bar, bool always_show_vertical_scroll_bar));
    IL2CPP_REGISTER_METHOD(0x019893A0, void, __ctor_8, (app::GuiBeginScrollView * this_ptr, app::Vector2 scroll_position, app::GUIStyle * horizontal_scroll_bar, app::GUIStyle * vertical_scroll_bar, app::GUILayoutOption__Array * options));
    IL2CPP_REGISTER_METHOD(0x01989400, void, Dispose, (app::GuiBeginScrollView * this_ptr));
}
