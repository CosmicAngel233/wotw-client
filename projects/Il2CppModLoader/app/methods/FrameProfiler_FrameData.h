#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::FrameProfiler_FrameData {
    IL2CPP_REGISTER_METHOD(0x03152BE0, void, ctor, (app::FrameProfiler_FrameData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03152EA0, void, Reset, (app::FrameProfiler_FrameData * this_ptr))
}
