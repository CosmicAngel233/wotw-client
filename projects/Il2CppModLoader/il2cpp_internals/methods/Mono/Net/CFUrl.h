#include <interception_macros.h>

namespace app::methods::Mono::Net::CFUrl {
    IL2CPP_REGISTER_METHOD(0x02173690, void, __ctor, (app::CFUrl * this_ptr, void * handle, bool own));
    IL2CPP_REGISTER_METHOD(0x0217A9A0, void *, CFURLCreateWithString, (void * allocator, void * str, void * base_u_r_l));
    IL2CPP_REGISTER_METHOD(0x0217AA50, app::CFUrl *, Create, (app::String * absolute));
}