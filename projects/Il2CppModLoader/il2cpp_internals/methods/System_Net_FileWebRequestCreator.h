#include <interception_macros.h>

namespace app::methods::System_Net::FileWebRequestCreator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::FileWebRequestCreator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D2AD50, app::WebRequest *, Create, (app::FileWebRequestCreator * this_ptr, app::Uri * uri));
}
