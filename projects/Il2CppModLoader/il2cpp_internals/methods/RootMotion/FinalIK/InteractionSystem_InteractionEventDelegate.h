#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionSystem_InteractionEventDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::InteractionSystem_InteractionEventDelegate * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01C795D0, void, Invoke, (app::InteractionSystem_InteractionEventDelegate * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject * interaction_object, app::InteractionObject_InteractionEvent * interaction_event));
    IL2CPP_REGISTER_METHOD(0x02A14640, app::IAsyncResult *, BeginInvoke, (app::InteractionSystem_InteractionEventDelegate * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject * interaction_object, app::InteractionObject_InteractionEvent * interaction_event, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::InteractionSystem_InteractionEventDelegate * this_ptr, app::IAsyncResult * result));
}