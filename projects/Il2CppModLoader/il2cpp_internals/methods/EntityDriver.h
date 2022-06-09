#include <interception_macros.h>

namespace app::methods::EntityDriver {
    IL2CPP_REGISTER_METHOD(0x00C90B40, app::EntityDriver *, GetInstance, ());
    IL2CPP_REGISTER_METHOD(0x00C90D10, void, ResetStatics2, ());
    IL2CPP_REGISTER_METHOD(0x00C90E60, void, RegisterEntity, (app::Entity * entity));
    IL2CPP_REGISTER_METHOD(0x00C90E90, void, UnRegisterEntity, (app::Entity * entity));
    IL2CPP_REGISTER_METHOD(0x00C90EC0, void, OnDestroy, (app::EntityDriver * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C90F40, void, __ctor, (app::EntityDriver * this_ptr));
}
