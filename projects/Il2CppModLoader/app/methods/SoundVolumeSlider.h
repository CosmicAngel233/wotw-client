#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SoundVolumeSlider {
    IL2CPP_REGISTER_METHOD(0x00EEE1D0, float, get_Value, (app::SoundVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EEE280, void, set_Value, (app::SoundVolumeSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00867970, void, ctor, (app::SoundVolumeSlider * this_ptr))
}
