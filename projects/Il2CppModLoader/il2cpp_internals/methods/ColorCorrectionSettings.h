#include <interception_macros.h>

namespace app::methods::ColorCorrectionSettings {
    IL2CPP_REGISTER_METHOD(0x012D2ED0, app::ColorCorrectionSettings *, Clone, (app::ColorCorrectionSettings * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012D3470, void, CopyFrom, (app::ColorCorrectionSettings * this_ptr, app::ColorCorrectionSettings * settings_color_correction));
    IL2CPP_REGISTER_METHOD(0x012D35D0, void, __ctor, (app::ColorCorrectionSettings * this_ptr));
}