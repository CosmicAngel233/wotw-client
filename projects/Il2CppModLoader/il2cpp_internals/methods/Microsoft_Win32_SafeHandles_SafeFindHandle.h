#include <interception_macros.h>

namespace app::methods::Microsoft_Win32_SafeHandles::SafeFindHandle {
    IL2CPP_REGISTER_METHOD(0x02172280, void, __ctor, (app::SafeFindHandle * this_ptr, void * preexisting_handle));
    IL2CPP_REGISTER_METHOD(0x023B6490, bool, ReleaseHandle, (app::SafeFindHandle * this_ptr));
}
