#include <interception_macros.h>

namespace app::methods::UnityEngine::GUIContent {
    IL2CPP_REGISTER_METHOD(0x029E2910, void, __ctor_1, (app::GUIContent * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029E29B0, void, __ctor_2, (app::GUIContent * this_ptr, app::String * text));
    IL2CPP_REGISTER_METHOD(0x029E2AB0, void, __ctor_3, (app::GUIContent * this_ptr, app::String * text, app::Texture * image, app::String * tooltip));
    IL2CPP_REGISTER_METHOD(0x029E2B50, void, __ctor_4, (app::GUIContent * this_ptr, app::GUIContent * src));
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::String *, get_text, (app::GUIContent * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_text, (app::GUIContent * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_image, (app::GUIContent * this_ptr, app::Texture * value));
    IL2CPP_REGISTER_METHOD(0x01704A60, app::String *, get_tooltip, (app::GUIContent * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_tooltip, (app::GUIContent * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x029E2C20, app::GUIContent *, Temp_1, (app::String * t));
    IL2CPP_REGISTER_METHOD(0x029E2D20, app::GUIContent *, Temp_2, (app::Texture * i));
    IL2CPP_REGISTER_METHOD(0x029E2E20, void, ClearStaticCache, ());
    IL2CPP_REGISTER_METHOD(0x029E2FA0, void, __cctor, ());
}
