#include <interception_macros.h>

namespace app::methods::System::IO::FileSystemEnumerableHelpers {
    IL2CPP_REGISTER_METHOD(0x0236F6F0, bool, IsDir, (app::Win32Native_WIN32_FIND_DATA * data))
    IL2CPP_REGISTER_METHOD(0x0236F7C0, bool, IsFile, (app::Win32Native_WIN32_FIND_DATA * data))
}