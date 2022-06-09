#include <interception_macros.h>

namespace app::methods::WeaponTypeVFXSettings {
    IL2CPP_REGISTER_METHOD(0x0056FF10, void, Initialize, (app::WeaponTypeVFXSettings * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005701A0, void, __ctor, (app::WeaponTypeVFXSettings * this_ptr));
    IL2CPP_REGISTER_METHOD(0x005705F0, app::GameObject *, FindVFX, (app::WeaponTypeVFXSettings * this_ptr, app::EquipmentType__Enum weapon_type, app::MaterialTypeVFXSettings_EffectSize__Enum size));
    IL2CPP_REGISTER_METHOD(0x00570710, app::GameObject *, FindBloodVFX, (app::WeaponTypeVFXSettings * this_ptr, app::EquipmentType__Enum weapon_type, app::MaterialTypeVFXSettings_EffectSize__Enum size, app::DamageRecieverType__Enum reciever_type));
    IL2CPP_REGISTER_METHOD(0x00570860, float, FindVFXOffset, (app::WeaponTypeVFXSettings * this_ptr, app::EquipmentType__Enum weapon_type));
    IL2CPP_REGISTER_METHOD(0x00570970, void, __cctor, ());
}
