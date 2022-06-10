#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::FrameTimingManager {
    IL2CPP_REGISTER_METHOD(0x025260C0, void, CaptureFrameTimings, ())
    IL2CPP_REGISTER_METHOD(0x02526110, uint32_t, GetLatestTimings, (uint32_t num_frames, app::FrameTiming__Array * timings))
}
