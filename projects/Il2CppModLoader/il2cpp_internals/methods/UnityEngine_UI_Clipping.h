#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::Clipping {
    IL2CPP_REGISTER_METHOD(0x01F2F9E0, app::Rect, FindCullAndClipWorldRect, (app::List_1_UnityEngine_UI_RectMask2D_ * rect_mask_parents, bool * valid_rect));
    IL2CPP_REGISTER_METHOD(0x01F2FDB0, app::Rect, RectIntersect, (app::Rect a, app::Rect b));
}
