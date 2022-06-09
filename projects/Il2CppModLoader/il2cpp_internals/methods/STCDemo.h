#include <interception_macros.h>

namespace app::methods::STCDemo {
    IL2CPP_REGISTER_METHOD(0x00C07A70, void, Start, (app::STCDemo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C07A80, void, SubscribeOnRemoteAction, (app::STCDemo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C07C00, void, ActionActivated, (app::STCDemo * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04786CB0, STCDemo_ActionActivated__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00C07DB0, void, Serialize, (app::STCDemo * this_ptr, app::Archive * ar));
    IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (app::STCDemo * this_ptr));
}
