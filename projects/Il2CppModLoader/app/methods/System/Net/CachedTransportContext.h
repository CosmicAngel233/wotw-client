#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::CachedTransportContext {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CachedTransportContext * this_ptr, app::ChannelBinding * binding))
    IL2CPP_REGISTER_METHOD(0x02016510, app::ChannelBinding *, GetChannelBinding, (app::CachedTransportContext * this_ptr, app::ChannelBindingKind__Enum kind))
}
