#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::MoonAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAA850, app::ActiveAnimationHandle, get_ActiveAnimation, (app::MoonAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAA860, void, OnStartPlayback, (app::MoonAnimationPlayer * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01BAAA00, void, OnUpdateEntity, (app::MoonAnimationPlayer * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01BAAAB0, void, OnStopPlayback, (app::MoonAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAAAD0, void, SetTimeScale, (app::MoonAnimationPlayer * this_ptr, float timescale))
    IL2CPP_REGISTER_METHOD(0x01BAAB00, void, Play, (app::MoonAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAACA0, void, SynchronizeData, (app::MoonAnimationPlayer * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x01BAAE80, void, ctor, (app::MoonAnimationPlayer * this_ptr))
}