#include <interception_macros.h>

namespace app::methods::Moon::AnimationCharacterAttribute {
    IL2CPP_REGISTER_METHOD(0x01B03400, void, ctor, (app::AnimationCharacterAttribute * this_ptr, app::String * character))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Character, (app::AnimationCharacterAttribute * this_ptr))
}