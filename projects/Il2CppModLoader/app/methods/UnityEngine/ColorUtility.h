#include <interception_macros.h>

namespace app::methods::UnityEngine::ColorUtility {
    IL2CPP_REGISTER_METHOD(0x02428C70, bool, DoTryParseHtmlColor, (app::String * html_string, app::Color32 * color))
    IL2CPP_REGISTER_METHOD(0x02428CD0, bool, TryParseHtmlString, (app::String * html_string, app::Color * color))
}