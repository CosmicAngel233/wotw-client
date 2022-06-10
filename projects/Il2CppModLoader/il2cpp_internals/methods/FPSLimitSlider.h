#include <interception_macros.h>

namespace app::methods::FPSLimitSlider {
    IL2CPP_REGISTER_METHOD(0x00988D00, void, Awake, (app::FPSLimitSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00988E50, void, OnEnable, (app::FPSLimitSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00988F80, void, OnDisable, (app::FPSLimitSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00988FA0, float, get_Value, (app::FPSLimitSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00989020, void, set_Value, (app::FPSLimitSlider * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00989100, app::String *, GetValueToDisplay, (app::FPSLimitSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00989210, bool, IsFPSLimitOff, ());
    IL2CPP_REGISTER_METHOD(0x009892A0, void, ApplyValueOnSliderReleased, (app::FPSLimitSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00867970, void, __ctor, (app::FPSLimitSlider * this_ptr));
}