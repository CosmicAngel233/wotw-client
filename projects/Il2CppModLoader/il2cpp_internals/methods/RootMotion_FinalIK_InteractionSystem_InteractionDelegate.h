#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::InteractionSystem_InteractionDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::InteractionSystem_InteractionDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::InteractionSystem_InteractionDelegate * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject * interaction_object));
IL2CPP_REGISTER_METHOD(0x02A14570, IAsyncResult *, BeginInvoke, (app::InteractionSystem_InteractionDelegate * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionObject * interaction_object, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::InteractionSystem_InteractionDelegate * this_ptr, app::IAsyncResult * result));
}
