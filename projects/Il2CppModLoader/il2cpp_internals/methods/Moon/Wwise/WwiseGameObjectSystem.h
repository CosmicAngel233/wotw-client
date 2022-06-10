#include <interception_macros.h>

namespace app::methods::Moon::Wwise::WwiseGameObjectSystem {
    IL2CPP_REGISTER_METHOD(0x027153E0, void, Initialize, (app::WwiseGameObjectSystem * this_ptr, app::AkWwiseInitializationSettings * config));
    IL2CPP_REGISTER_METHOD(0x027157C0, app::ArtificialSoundHost *, GetFreeSoundHost, (app::WwiseGameObjectSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02715900, app::ArtificialSoundHostReference, Allocate, (app::WwiseGameObjectSystem * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x02715B30, void, Update, (app::WwiseGameObjectSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02715C10, void, FireAndForget, (app::WwiseGameObjectSystem * this_ptr, app::String * name, app::Event_1 * evt, app::Vector3 position));
    IL2CPP_REGISTER_METHOD(0x02715C90, void, Dispose, (app::WwiseGameObjectSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02715D00, void, PrintState, (app::WwiseGameObjectSystem * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::WwiseGameObjectSystem * this_ptr));
}