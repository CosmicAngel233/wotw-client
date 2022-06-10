#include <interception_macros.h>

namespace app::methods::Moon::Timeline::PlayableCharacterControlAnimator {
    IL2CPP_REGISTER_METHOD(0x00779F10, app::Vector3, get_Position, (app::PlayableCharacterControlAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0077A120, void, OnStartPlayback, (app::PlayableCharacterControlAnimator * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x0077A770, void, OnUpdateEntity, (app::PlayableCharacterControlAnimator * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x0077AE30, void, OnStopPlayback, (app::PlayableCharacterControlAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0077B230, void, __ctor, (app::PlayableCharacterControlAnimator * this_ptr));
}