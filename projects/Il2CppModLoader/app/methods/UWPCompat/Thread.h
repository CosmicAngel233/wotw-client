#pragma once
#include <interception_macros.h>

namespace app::methods::UWPCompat::Thread {
    IL2CPP_REGISTER_METHOD(0x013DDC00, void, Sleep, (int32_t time))
}
