#include <interception_macros.h>

namespace app::methods::System::Net::SecurityBuffer {
    IL2CPP_REGISTER_METHOD(0x01BD2F00, void, ctor_1, (app::SecurityBuffer * this_ptr, app::Byte__Array * data, int32_t offset, int32_t size, app::BufferType__Enum tokentype))
    IL2CPP_REGISTER_METHOD(0x01BD3030, void, ctor_2, (app::SecurityBuffer * this_ptr, app::Byte__Array * data, app::BufferType__Enum tokentype))
    IL2CPP_REGISTER_METHOD(0x01BD3070, void, ctor_3, (app::SecurityBuffer * this_ptr, int32_t size, app::BufferType__Enum tokentype))
    IL2CPP_REGISTER_METHOD(0x01BD3130, void, ctor_4, (app::SecurityBuffer * this_ptr, app::ChannelBinding * binding))
}