#include <interception_macros.h>

namespace app::methods::PlayFab::Internal::CallRequestContainer {
    IL2CPP_REGISTER_METHOD(0x01835C10, void, ctor, (app::CallRequestContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::HttpRequestMessage *, get_HttpRequestMessage, (app::CallRequestContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_HttpRequestMessage, (app::CallRequestContainer * this_ptr, app::HttpRequestMessage * value))
}