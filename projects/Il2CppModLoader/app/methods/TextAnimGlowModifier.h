#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::TextAnimGlowModifier {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresNormals, (app::TextAnimGlowModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E39B0, void, SetProperties, (app::TextAnimGlowModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E3AA0, void, ctor, (app::TextAnimGlowModifier * this_ptr))
}
