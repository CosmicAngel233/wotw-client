#include <interception_macros.h>

namespace app::methods::Moon::Race::Networking::LeaderboadData {
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsReady, (app::LeaderboadData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsReady, (app::LeaderboadData * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LeaderboadData * this_ptr));
}