#include <interception_macros.h>

namespace app::methods::GasballSpawnSetup {
    IL2CPP_REGISTER_METHOD(0x00420C50, app::Vector3, get_StartPosition, (app::GasballSpawnSetup * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420E20, void, __ctor, (app::GasballSpawnSetup * this_ptr));
}
