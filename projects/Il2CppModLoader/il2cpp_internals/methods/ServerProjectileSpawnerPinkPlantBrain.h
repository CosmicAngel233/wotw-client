#include <interception_macros.h>

namespace app::methods::ServerProjectileSpawnerPinkPlantBrain {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (app::ServerProjectileSpawnerPinkPlantBrain * this_ptr, app::Object * original_component));
    IL2CPP_REGISTER_METHOD(0x0059E7A0, app::Object *, CreateData, (app::ServerProjectileSpawnerPinkPlantBrain * this_ptr, app::Object * data));
    IL2CPP_REGISTER_METHOD(0x0059ECD0, app::Component_1 *, ApplyData, (app::ServerProjectileSpawnerPinkPlantBrain * this_ptr, app::GameObject * * gameobj));
    IL2CPP_REGISTER_METHOD(0x0059F120, void, RebuildReferences, (app::ServerProjectileSpawnerPinkPlantBrain * this_ptr));
}