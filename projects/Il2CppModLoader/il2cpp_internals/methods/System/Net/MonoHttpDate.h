#include <interception_macros.h>

namespace app::methods::System::Net::MonoHttpDate {
    IL2CPP_REGISTER_METHOD(0x01E708E0, app::DateTime, Parse, (app::String * date_str));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MonoHttpDate * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E70A10, void, __cctor, ());
}
