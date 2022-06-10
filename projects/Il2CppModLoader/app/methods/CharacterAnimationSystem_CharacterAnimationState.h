#include <interception_macros.h>

namespace app::methods::CharacterAnimationSystem_CharacterAnimationState {
    IL2CPP_REGISTER_METHOD(0x01049E40, void, ctor_1, (app::CharacterAnimationSystem_CharacterAnimationState * this_ptr, app::TextureAnimationWithTransitions * animation, app::Func_1_Boolean_ * condition, int32_t layer, bool play_once, bool keep_frame))
    IL2CPP_REGISTER_METHOD(0x01049EA0, void, ctor_2, (app::CharacterAnimationSystem_CharacterAnimationState * this_ptr, app::String * animation, app::Func_1_Boolean_ * condition, int32_t layer, bool play_once, bool keep_frame))
    IL2CPP_REGISTER_METHOD(0x01049EC0, bool, get_Condition, (app::CharacterAnimationSystem_CharacterAnimationState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01049F50, void, InvokeOnStopPlaying, (app::CharacterAnimationSystem_CharacterAnimationState * this_ptr))
}