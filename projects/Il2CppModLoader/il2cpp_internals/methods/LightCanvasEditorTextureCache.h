#include <interception_macros.h>

namespace app::methods::LightCanvasEditorTextureCache {
IL2CPP_REGISTER_METHOD(0x011469D0, LightCanvasEditorTextureCache *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01146BF0, Texture2D *, GetLightCanvasEditorTempLightTexture_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas));
IL2CPP_REGISTER_METHOD(0x01146C40, Texture2D *, GetLightCanvasEditorTempLightTexture_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x01146C80, RenderTexture *, GetLightCanvasEditorTempLightRenderTexture, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas));
IL2CPP_REGISTER_METHOD(0x01146CC0, bool, GetLightCanvasTextureDirty_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas));
IL2CPP_REGISTER_METHOD(0x01146D10, bool, GetLightCanvasTextureDirty_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x01146D50, void, SetLightCanvasTextureDirty_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, bool is_dirty));
IL2CPP_REGISTER_METHOD(0x01146E90, void, SetLightCanvasTextureDirty_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, int32_t state, bool is_dirty));
IL2CPP_REGISTER_METHOD(0x01146FD0, Texture2D *, CreateNewEditorTempTextureForLightCanvas_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x01147000, Texture2D *, CreateNewEditorTempTextureForLightCanvas_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, int32_t width, int32_t height, int32_t state_guid));
IL2CPP_REGISTER_METHOD(0x011473E0, RenderTexture *, CreateNewEditorTempRenderTextureForLightCanvas, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, int32_t width, int32_t height));
IL2CPP_REGISTER_METHOD(0x01147780, LightCanvasEditorTextureCache_LightCanvasEditorTextureData, GetTextureDataForLightCanvas_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas));
IL2CPP_REGISTER_METHOD(0x011477D0, LightCanvasEditorTextureCache_LightCanvasEditorTextureData, GetTextureDataForLightCanvas_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x011479A0, bool, HasTextureDataForLightCanvas, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * light_canvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x01147A80, void, OnBeforeSerialize, (app::LightCanvasEditorTextureCache * this_ptr));
IL2CPP_REGISTER_METHOD(0x01147C40, void, OnAfterDeserialize, (app::LightCanvasEditorTextureCache * this_ptr));
IL2CPP_REGISTER_METHOD(0x01147F80, int32_t, GetKey_1, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * canvas));
IL2CPP_REGISTER_METHOD(0x01147FC0, int32_t, GetKey_2, (app::LightCanvasEditorTextureCache * this_ptr, app::LightCanvas * canvas, int32_t state));
IL2CPP_REGISTER_METHOD(0x01147FF0, void, __ctor, (app::LightCanvasEditorTextureCache * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
