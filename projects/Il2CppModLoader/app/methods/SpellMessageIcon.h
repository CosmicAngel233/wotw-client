#include <interception_macros.h>

namespace app::methods::SpellMessageIcon {
    IL2CPP_REGISTER_METHOD(0x00943010, void, SetIcon, (app::SpellMessageIcon * this_ptr, app::Texture2D * icon))
    IL2CPP_REGISTER_METHOD(0x009430C0, void, SetName, (app::SpellMessageIcon * this_ptr, app::MessageProvider * name))
    IL2CPP_REGISTER_METHOD(0x00943180, void, SetSubText, (app::SpellMessageIcon * this_ptr, bool is_passive))
    IL2CPP_REGISTER_METHOD(0x00943250, void, SetDescription, (app::SpellMessageIcon * this_ptr, app::MessageProvider * description))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpellMessageIcon * this_ptr))
}