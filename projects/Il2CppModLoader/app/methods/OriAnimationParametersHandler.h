#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::OriAnimationParametersHandler {
    IL2CPP_REGISTER_METHOD(0x00620A60, void, Start, (app::OriAnimationParametersHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00620AD0, void, Update, (app::OriAnimationParametersHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00621370, void, SetParameter, (app::OriAnimationParametersHandler * this_ptr, app::FloatAnimationParameter * parameter, float value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::OriAnimationParametersHandler * this_ptr))
}
