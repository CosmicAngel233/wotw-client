#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02B87FA0, int32_t, Invoke, (app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * this_ptr, app::Vitals_DamageProcessHelper_DamageBucket x, app::Vitals_DamageProcessHelper_DamageBucket y));
    IL2CPP_REGISTER_METHOD(0x02C7AC40, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * this_ptr, app::Vitals_DamageProcessHelper_DamageBucket x, app::Vitals_DamageProcessHelper_DamageBucket y, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * this_ptr, app::IAsyncResult * result));
}