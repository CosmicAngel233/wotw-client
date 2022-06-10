#include <interception_macros.h>

namespace app::methods::UnityEngine::GUISettings {
    IL2CPP_REGISTER_METHOD(0x029F0090, void, ctor, (app::GUISettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F00C0, float, Internal_GetCursorFlashSpeed, ())
    IL2CPP_REGISTER_METHOD(0x01F19AD0, bool, get_doubleClickSelectsWord, (app::GUISettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0110, bool, get_tripleClickSelectsLine, (app::GUISettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0120, app::Color, get_cursorColor, (app::GUISettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0130, float, get_cursorFlashSpeed, (app::GUISettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F0190, app::Color, get_selectionColor, (app::GUISettings * this_ptr))
}