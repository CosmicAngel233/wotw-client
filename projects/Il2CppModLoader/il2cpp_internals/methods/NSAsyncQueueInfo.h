#include <interception_macros.h>

namespace app::methods::NSAsyncQueueInfo {
    IL2CPP_REGISTER_METHOD(0x0257B4C0, void, __ctor_1, (app::NSAsyncQueueInfo * this_ptr, app::String * typ, app::String * path, app::Byte__Array * data, int32_t file_size_in_bytes, bool overwrite, bool is_from_copy_request));
    IL2CPP_REGISTER_METHOD(0x0257B4F0, void, __ctor_2, (app::NSAsyncQueueInfo * this_ptr, app::String * typ, app::String * source, app::String * dest, bool overwrite));
}