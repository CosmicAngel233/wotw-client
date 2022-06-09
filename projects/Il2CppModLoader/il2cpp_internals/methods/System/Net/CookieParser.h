#include <interception_macros.h>

namespace app::methods::System::Net::CookieParser {
    IL2CPP_REGISTER_METHOD(0x01EA7850, void, __ctor, (app::CookieParser * this_ptr, app::String * cookie_string));
    IL2CPP_REGISTER_METHOD(0x01EA79B0, app::Cookie *, Get, (app::CookieParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01EA8210, app::Cookie *, GetServer, (app::CookieParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01EA8950, app::String *, CheckQuoted, (app::String * value));
}
