#include <interception_macros.h>

namespace app::methods::CharacterFovController {
    IL2CPP_REGISTER_METHOD(0x01050A40, void, GetTargets, (app::CharacterFovController * this_ptr, app::SeinCharacter * character, float * offset, float * factor));
    IL2CPP_REGISTER_METHOD(0x01050D20, float, get_CurrentOffset, (app::CharacterFovController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_TargetZ, (app::CharacterFovController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01050D30, void, NoUpdate, (app::CharacterFovController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01050EA0, void, OnGUI, (app::CharacterFovController * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010510B0, void, __ctor, (app::CharacterFovController * this_ptr));
}