#include <interception_macros.h>

namespace app::methods::RaceDebug {
    IL2CPP_REGISTER_METHOD(0x00E98580, void, DownloadReplay, (app::RaceDebug * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E985B0, void, ParseLastDownloadedReplay, (app::RaceDebug * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E98870, void, __ctor, (app::RaceDebug * this_ptr));
}
