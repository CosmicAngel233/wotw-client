#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization {
    IL2CPP_REGISTER_METHOD(0x01853300, app::Object *, DeserializeObject, (app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization * this_ptr, app::Object * value, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x018537A0, bool, TrySerializeKnownTypes, (app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization * this_ptr, app::Object * input, app::Object * * output))
    IL2CPP_REGISTER_METHOD(0x01853AB0, void, ctor, (app::SimpleJsonInstance_PlayFabSimpleJsonCuztomization * this_ptr))
}
