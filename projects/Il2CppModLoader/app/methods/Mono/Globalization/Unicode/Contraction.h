#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Mono::Globalization::Unicode::Contraction {
    IL2CPP_REGISTER_METHOD(0x023BA050, void, ctor, (app::Contraction * this_ptr, int32_t index, app::Char__Array * source, app::String * replacement, app::Byte__Array * sortkey))
}
