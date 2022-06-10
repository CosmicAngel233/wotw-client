#include <interception_macros.h>

namespace app::methods::UnityEngine::Profiling::Sampler {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::Sampler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_2, (app::Sampler * this_ptr, void * ptr));
    IL2CPP_REGISTER_METHOD(0x02969CB0, bool, get_isValid, (app::Sampler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02969D30, app::Recorder *, GetRecorder, (app::Sampler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02969F30, app::Sampler *, Get, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x0296A130, app::String *, GetSamplerName, (app::Sampler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0296A180, app::String *, get_name, (app::Sampler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0296A250, void *, GetRecorderInternal, (void * ptr));
    IL2CPP_REGISTER_METHOD(0x0296A2A0, void *, GetSamplerInternal, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x0296A2F0, void, __cctor, ());
}