#include <interception_macros.h>

namespace app::methods::PlayAnimationCutsceneState {
    IL2CPP_REGISTER_METHOD(0x01175740, app::SeinCharacter *, get_Sein, (app::PlayAnimationCutsceneState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x011757D0, void, OnEnter, (app::PlayAnimationCutsceneState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01175BD0, void, OnExit, (app::PlayAnimationCutsceneState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01175CE0, void, OnUpdate, (app::PlayAnimationCutsceneState * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0060C050, void, __ctor, (app::PlayAnimationCutsceneState * this_ptr));
}