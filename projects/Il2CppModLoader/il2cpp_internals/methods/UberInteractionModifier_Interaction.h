#include <interception_macros.h>

namespace app::methods::UberInteractionModifier_Interaction {
    IL2CPP_REGISTER_METHOD(0x00123670, bool, get_ReadyToPlay, (app::UberInteractionModifier_Interaction__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00123680, void, Play_1, (app::UberInteractionModifier_Interaction__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00123740, bool, IsReadyToPlay, (app::UberInteractionModifier_Interaction__Boxed * this_ptr, float current_time));
    IL2CPP_REGISTER_METHOD(0x00115B40, void, Play_2, (app::UberInteractionModifier_Interaction__Boxed * this_ptr, float time));
}