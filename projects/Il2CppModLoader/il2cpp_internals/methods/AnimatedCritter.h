#include <interception_macros.h>

namespace app::methods::AnimatedCritter {
IL2CPP_REGISTER_METHOD(0x004FA640, Vector3, get_Position, (app::AnimatedCritter * this_ptr));
IL2CPP_REGISTER_METHOD(0x004FA790, float, get_EffectiveDistance, (app::AnimatedCritter * this_ptr));
IL2CPP_REGISTER_METHOD(0x004FA7A0, bool, get_IsPlaying, (app::AnimatedCritter * this_ptr));
IL2CPP_REGISTER_METHOD(0x004FA7C0, void, Awake, (app::AnimatedCritter * this_ptr));
IL2CPP_REGISTER_METHOD(0x004FA7D0, void, RefreshEffectiveDistance, (app::AnimatedCritter * this_ptr));
IL2CPP_REGISTER_METHOD(0x004FA960, void, PlayOnce, (app::AnimatedCritter * this_ptr));
IL2CPP_REGISTER_METHOD(0x004FA9A0, void, OnDrawGizmosSelected, (app::AnimatedCritter * this_ptr));
IL2CPP_REGISTER_METHOD(0x004FAA60, void, __ctor, (app::AnimatedCritter * this_ptr));
}
