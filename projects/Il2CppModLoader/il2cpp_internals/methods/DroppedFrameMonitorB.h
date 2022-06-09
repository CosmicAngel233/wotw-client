#include <interception_macros.h>

namespace app::methods::DroppedFrameMonitorB {
    IL2CPP_REGISTER_METHOD(0x00BE75F0, void, __ctor, (app::DroppedFrameMonitorB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00BE7940, void, UpdateHealth, (app::DroppedFrameMonitorB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00BE7970, void, AddFrame, (app::DroppedFrameMonitorB * this_ptr, float frame_time, float cpu_time, float gpu_time, float no_drops_time));
    IL2CPP_REGISTER_METHOD(0x00BE7DA0, void, Update, (app::DroppedFrameMonitorB * this_ptr, float frame_time, float cpu_time, float gpu_time));
    IL2CPP_REGISTER_METHOD(0x00BE7FA0, void, DumpTempData, (app::DroppedFrameMonitorB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00BE83A0, void, SwapAndReset, (app::DroppedFrameMonitorB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00BE83F0, void, Swap, (app::DroppedFrameMonitorB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00BE8430, void, Reset, (app::DroppedFrameMonitorB * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
