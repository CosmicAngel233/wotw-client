#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Audio::AudioMixer {
    IL2CPP_REGISTER_METHOD(0x0313DA20, app::AudioMixerGroup__Array *, FindMatchingGroups, (app::AudioMixer * this_ptr, app::String * sub_path))
    IL2CPP_REGISTER_METHOD(0x0313DA80, bool, SetFloat, (app::AudioMixer * this_ptr, app::String * name, float value))
}
