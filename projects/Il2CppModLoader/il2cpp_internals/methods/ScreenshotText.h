#include <interception_macros.h>

namespace app::methods::ScreenshotText {
    IL2CPP_REGISTER_METHOD(0x01069540, void, __ctor_1, (app::ScreenshotText * this_ptr, app::ScreenshotTextMarker * screenshot_text_marker));
    IL2CPP_REGISTER_METHOD(0x010696E0, void, __ctor_2, (app::ScreenshotText * this_ptr, app::Vector2 position, app::String * text));
}