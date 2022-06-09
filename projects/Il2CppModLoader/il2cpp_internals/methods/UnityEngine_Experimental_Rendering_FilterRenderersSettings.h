#include <interception_macros.h>

namespace app::methods::UnityEngine_Experimental_Rendering::FilterRenderersSettings {
    IL2CPP_REGISTER_METHOD(0x001EC770, void, __ctor, (app::FilterRenderersSettings__Boxed * this_ptr, bool initialize_values));
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_renderQueueRange, (app::FilterRenderersSettings__Boxed * this_ptr, app::RenderQueueRange value));
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_layerMask, (app::FilterRenderersSettings__Boxed * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x001EC7C0, void, set_renderingLayerMask, (app::FilterRenderersSettings__Boxed * this_ptr, uint32_t value));
}
