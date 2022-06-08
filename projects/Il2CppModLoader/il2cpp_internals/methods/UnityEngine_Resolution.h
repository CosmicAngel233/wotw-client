#include <interception_macros.h>

namespace app::methods::UnityEngine::Resolution {
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_width, (Resolution__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_width, (Resolution__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00218130, int32_t, get_height, (Resolution__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_height, (Resolution__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_refreshRate, (Resolution__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00127510, void, set_refreshRate, (Resolution__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00218560, String *, ToString, (Resolution__Boxed * __this));
}
