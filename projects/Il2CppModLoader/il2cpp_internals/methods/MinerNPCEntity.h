#include <interception_macros.h>

namespace app::methods::MinerNPCEntity {
    IL2CPP_REGISTER_METHOD(0x0144E290, app::String *, get_DialogActorName, (app::MinerNPCEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0144E310, app::String *, get_InteractionActorName, (app::MinerNPCEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004173E0, void, __ctor, (app::MinerNPCEntity * this_ptr));
}
