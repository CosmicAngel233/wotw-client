#include <interception_macros.h>

namespace app::methods::Microsoft_Win32_SafeHandles::SafeFileHandle {
IL2CPP_REGISTER_METHOD(0x021722B0, void, __ctor, (app::SafeFileHandle * this_ptr, app::void * preexisting_handle, bool owns_handle));
IL2CPP_REGISTER_METHOD(0x023B63D0, bool, ReleaseHandle, (app::SafeFileHandle * this_ptr));
}
