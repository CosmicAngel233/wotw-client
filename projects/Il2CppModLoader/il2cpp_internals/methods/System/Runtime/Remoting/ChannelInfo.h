#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::ChannelInfo {
    IL2CPP_REGISTER_METHOD(0x01A9AAA0, void, __ctor_1, (app::ChannelInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A9AB40, void, __ctor_2, (app::ChannelInfo * this_ptr, app::Object * remote_channel_data));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object__Array *, get_ChannelData, (app::ChannelInfo * this_ptr));
}
