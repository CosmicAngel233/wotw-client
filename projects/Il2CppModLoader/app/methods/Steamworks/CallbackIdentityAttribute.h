#include <interception_macros.h>

namespace app::methods::Steamworks::CallbackIdentityAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Identity, (app::CallbackIdentityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Identity, (app::CallbackIdentityAttribute * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::CallbackIdentityAttribute * this_ptr, int32_t callback_num))
}