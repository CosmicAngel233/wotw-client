#include <interception_macros.h>

namespace app::methods::UnityEngine::Playables::PlayableBinding_CreateOutputMethod {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::PlayableBinding_CreateOutputMethod * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x02964470, app::PlayableOutput, Invoke, (app::PlayableBinding_CreateOutputMethod * this_ptr, app::PlayableGraph graph, app::String * name));
    IL2CPP_REGISTER_METHOD(0x02964950, app::IAsyncResult *, BeginInvoke, (app::PlayableBinding_CreateOutputMethod * this_ptr, app::PlayableGraph graph, app::String * name, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::PlayableOutput, EndInvoke, (app::PlayableBinding_CreateOutputMethod * this_ptr, app::IAsyncResult * result));
}