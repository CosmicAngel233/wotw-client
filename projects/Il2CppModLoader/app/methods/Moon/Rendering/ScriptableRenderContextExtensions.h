#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Rendering::ScriptableRenderContextExtensions {
    IL2CPP_REGISTER_METHOD(0x00EB5D10, void, ExecuteCommandBuffer, (app::ScriptableRenderContext ctx, app::CommandBuffer * buffer, bool copy))
}
