#include <interception_macros.h>

namespace app::methods::Moon::UberStateCollectionGroup {
IL2CPP_REGISTER_METHOD(0x01B691F0, IUberState *, GetState, (app::UberStateCollectionGroup * this_ptr, app::UberID * id));
IL2CPP_REGISTER_METHOD(0x01B692F0, void, Add, (app::UberStateCollectionGroup * this_ptr, app::UberID * id, app::IUberState * uber_state_descriptor));
IL2CPP_REGISTER_METHOD(0x01B69520, void, __ctor, (app::UberStateCollectionGroup * this_ptr));
}
