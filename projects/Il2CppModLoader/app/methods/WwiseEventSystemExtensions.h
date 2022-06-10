#include <interception_macros.h>

namespace app::methods::WwiseEventSystemExtensions {
    IL2CPP_REGISTER_METHOD(0x00593850, app::WwiseEventSystem_SoundHandle, AllocateHandle, (app::WwiseEventSystem * system, app::SoundProvider * sound_provider, app::ISoundHost * host))
    IL2CPP_REGISTER_METHOD(0x00593910, void, FireAndForget, (app::WwiseEventSystem * system, app::SoundProvider * sound_provider, app::ISoundHost * host))
}