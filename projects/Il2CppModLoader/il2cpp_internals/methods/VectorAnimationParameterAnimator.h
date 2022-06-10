#include <interception_macros.h>

namespace app::methods::VectorAnimationParameterAnimator {
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_Duration, (app::VectorAnimationParameterAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::VectorAnimationParameterAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::VectorAnimationParameterAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::VectorAnimationParameterAnimator * this_ptr, float value, bool force_sample));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::VectorAnimationParameterAnimator * this_ptr));
    IL2CPP_REGISTER_METHOD(0x013BB1C0, void, __ctor, (app::VectorAnimationParameterAnimator * this_ptr));
}