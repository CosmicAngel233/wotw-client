#include <interception_macros.h>

namespace app::methods::System::Net::IntPtrHelper {
    IL2CPP_REGISTER_METHOD(0x01E6A500, void *, Add, (void * a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x01E6A510, int64_t, Subtract, (void * a, void * b))
}