#include <interception_macros.h>

namespace app::methods::Moon::EffectsFramework::NameAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NameAttribute * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Name, (app::NameAttribute * this_ptr))
}