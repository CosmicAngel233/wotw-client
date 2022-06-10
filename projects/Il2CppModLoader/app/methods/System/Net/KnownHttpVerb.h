#include <interception_macros.h>

namespace app::methods::System::Net::KnownHttpVerb {
    IL2CPP_REGISTER_METHOD(0x01E6A970, void, ctor, (app::KnownHttpVerb * this_ptr, app::String * name, bool require_content_body, bool content_body_not_allowed, bool connect_request, bool expect_no_content_response))
    IL2CPP_REGISTER_METHOD(0x01E6A990, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01E6B1B0, bool, Equals, (app::KnownHttpVerb * this_ptr, app::KnownHttpVerb * verb))
    IL2CPP_REGISTER_METHOD(0x01E6B340, app::KnownHttpVerb *, Parse, (app::String * name))
}