#include <interception_macros.h>

namespace app::methods::ServerProjectileSpawner {
IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (app::ServerProjectileSpawner * this_ptr, app::Object * data));
IL2CPP_REGISTER_METHOD(0x0059DFD0, Object *, CreateData, (app::ServerProjectileSpawner * this_ptr, app::Object * original_object));
IL2CPP_REGISTER_METHOD(0x0059E2D0, Component_1 *, ApplyData, (app::ServerProjectileSpawner * this_ptr, app::GameObject * * gameobj));
IL2CPP_REGISTER_METHOD(0x0059E460, void, RebuildReferences, (app::ServerProjectileSpawner * this_ptr));
}
