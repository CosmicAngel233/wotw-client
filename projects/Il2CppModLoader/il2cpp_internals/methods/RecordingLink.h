#include <interception_macros.h>

namespace app::methods::RecordingLink {
    IL2CPP_REGISTER_METHOD(0x008FADF0, void, BeginInteraction, (app::RecordingLink * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008FAF60, void, EndInteraction, (app::RecordingLink * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008FB0D0, void, __ctor, (app::RecordingLink * this_ptr));
}
