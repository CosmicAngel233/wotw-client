#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::BatchedSpherecast {
    IL2CPP_REGISTER_METHOD(0x00F97C30, void, ctor, (app::BatchedSpherecast * this_ptr, int32_t batch_size))
    IL2CPP_REGISTER_METHOD(0x00F97DA0, app::JobHandle, ScheduleBatch, (app::BatchedSpherecast * this_ptr))
}
