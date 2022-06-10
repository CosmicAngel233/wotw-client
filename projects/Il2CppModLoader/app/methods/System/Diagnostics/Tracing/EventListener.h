#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventListener {
    IL2CPP_REGISTER_METHOD(0x0174AE50, void, Dispose, (app::EventListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174B120, void, OnEventSourceCreated, (app::EventListener * this_ptr, app::EventSource * event_source))
    IL2CPP_REGISTER_METHOD(0x0174B310, void, OnEventWritten, (app::EventListener * this_ptr, app::EventWrittenEventArgs * event_data))
    IL2CPP_REGISTER_METHOD(0x0174B3B0, void, AddEventSource, (app::EventSource * new_event_source))
    IL2CPP_REGISTER_METHOD(0x0174BE30, void, DisposeOnShutdown, (app::Object * sender, app::EventArgs * e))
    IL2CPP_REGISTER_METHODINFO(0x04747488, EventListener_DisposeOnShutdown__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0174C0C0, void, RemoveReferencesToListenerInEventSources, (app::EventListener * listener_to_remove))
    IL2CPP_REGISTER_METHOD(0x0174C320, app::Object *, get_EventListenersLock, ())
    IL2CPP_REGISTER_METHOD(0x0174C530, void, cctor, ())
}