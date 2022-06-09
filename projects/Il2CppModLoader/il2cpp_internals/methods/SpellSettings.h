#include <interception_macros.h>

namespace app::methods::SpellSettings {
    IL2CPP_REGISTER_METHOD(0x00943DB0, void, Awake, (app::SpellSettings * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00943E40, bool, IsSpiritShardCompatible, (app::SpellSettings * this_ptr, app::SpiritShardType__Enum shard_type, app::EquipmentType__Enum equipment_type));
    IL2CPP_REGISTER_METHOD(0x00944010, void, __ctor, (app::SpellSettings * this_ptr));
} // namespace app::methods::SpellSettings
