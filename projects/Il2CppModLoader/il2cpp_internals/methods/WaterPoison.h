#include <interception_macros.h>

namespace app::methods::WaterPoison {
    IL2CPP_REGISTER_METHOD(0x008D8780, int32_t, GetWaterPoisonCount, ());
    IL2CPP_REGISTER_METHOD(0x008D8830, app::List_1_Damage_ *, GetDamages, (app::Vector3 position));
    IL2CPP_REGISTER_METHOD(0x008D8B70, void, __cctor, ());
}
