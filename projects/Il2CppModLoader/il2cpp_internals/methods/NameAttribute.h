#include <interception_macros.h>

namespace app::methods::NameAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::NameAttribute_1 * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Name, (app::NameAttribute_1 * this_ptr));
}
