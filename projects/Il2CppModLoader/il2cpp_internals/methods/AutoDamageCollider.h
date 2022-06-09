#include <interception_macros.h>

namespace app::methods::AutoDamageCollider {
IL2CPP_REGISTER_METHOD(0x0085AAA0, bool, IsDamageBasedOnSpicificArea, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085AAB0, void, OnValidate, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085ABF0, void, Awake, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085AC00, void, Validate, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085ADF0, void, Clear, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085AEA0, void, AddDamageDealer_1, (app::AutoDamageCollider * this_ptr, app::List_1_UnityEngine_Vector2_ * points, app::Vector2 position, app::Transform * parent));
IL2CPP_REGISTER_METHOD(0x0085B3A0, Polygon_1 *, AddPolygonComponent, (app::AutoDamageCollider * this_ptr, app::GameObject * obj, app::List_1_UnityEngine_Vector2_ * points));
IL2CPP_REGISTER_METHOD(0x0085B470, DamageDealer *, AddDamageDealer_2, (app::AutoDamageCollider * this_ptr, app::GameObject * obj));
IL2CPP_REGISTER_METHOD(0x0085B520, void, ApplyDamageSettings, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085B6C0, void, SetDamageDealerValues, (app::AutoDamageCollider * this_ptr, app::DamageDealer * dealer));
IL2CPP_REGISTER_METHOD(0x0085B740, DamageType__Enum, GetBestDamageType, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085BC60, void, OnBeforeStrip, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085BC80, void, RemoveNullChildren, (app::AutoDamageCollider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0085BFA0, void, __ctor, (app::AutoDamageCollider * this_ptr));
}
