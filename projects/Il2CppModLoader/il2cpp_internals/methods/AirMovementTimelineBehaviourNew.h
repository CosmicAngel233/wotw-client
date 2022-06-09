#include <interception_macros.h>

namespace app::methods::AirMovementTimelineBehaviourNew {
IL2CPP_REGISTER_METHOD(0x004F19A0, void, OnEntityInitialized, (app::AirMovementTimelineBehaviourNew * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F1A40, void, OnEnter, (app::AirMovementTimelineBehaviourNew * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x004F1BF0, void, OnExit, (app::AirMovementTimelineBehaviourNew * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x004F1D00, Vector3, RootMotionModifier, (app::AirMovementTimelineBehaviourNew * this_ptr, app::Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x04735CA8, AirMovementTimelineBehaviourNew_RootMotionModifier__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420FE0, void, __ctor, (app::AirMovementTimelineBehaviourNew * this_ptr));
}
