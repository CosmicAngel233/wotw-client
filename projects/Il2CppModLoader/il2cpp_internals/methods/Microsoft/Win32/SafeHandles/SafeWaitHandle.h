#include <interception_macros.h>

namespace app::methods::Microsoft::Win32::SafeHandles::SafeWaitHandle {
    IL2CPP_REGISTER_METHOD(0x021722B0, void, __ctor, (app::SafeWaitHandle * this_ptr, void * existing_handle, bool owns_handle));
    IL2CPP_REGISTER_METHOD(0x023B65E0, bool, ReleaseHandle, (app::SafeWaitHandle * this_ptr));
}