#include <interception_macros.h>

namespace app::methods::ColliderEnterExitTrigger {
    IL2CPP_REGISTER_METHOD(0x012CF010, void, Start, (app::ColliderEnterExitTrigger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012CF0A0, bool, ValidObject, (app::ColliderEnterExitTrigger * this_ptr, app::GameObject * go));
    IL2CPP_REGISTER_METHOD(0x012CF270, void, FixedUpdate, (app::ColliderEnterExitTrigger * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::ColliderEnterExitTrigger * this_ptr));
}
