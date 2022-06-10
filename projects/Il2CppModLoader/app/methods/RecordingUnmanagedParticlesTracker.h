#include <interception_macros.h>

namespace app::methods::RecordingUnmanagedParticlesTracker {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_TrackTranformChangesForRecording, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, get_ParsingGroup, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FB250, app::TrackingExclusions, get_TrackingExclusions, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FB260, void, Awake, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RecordingUnmanagedParticlesTracker * this_ptr))
}