#include <interception_macros.h>

namespace app::methods::DRSDownscaleSlider {
    IL2CPP_REGISTER_METHOD(0x00DBFC40, void, Awake, (app::DRSDownscaleSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DBFCA0, float, get_Value, (app::DRSDownscaleSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00DBFDB0, void, set_Value, (app::DRSDownscaleSlider * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x00DBFED0, app::String *, GetValueToDisplay, (app::DRSDownscaleSlider * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00867970, void, __ctor, (app::DRSDownscaleSlider * this_ptr));
}
