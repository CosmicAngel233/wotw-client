#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Rendering::QualityProfile {
    IL2CPP_REGISTER_METHOD(0x00EB1580, void, Apply, (app::QualityProfile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EB1900, void, ctor, (app::QualityProfile * this_ptr))
}
