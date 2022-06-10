#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::SortingLayer {
    IL2CPP_REGISTER_METHOD(0x02C60C10, int32_t, GetLayerValueFromID, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x02C60C60, int32_t, NameToID, (app::String * name))
}
