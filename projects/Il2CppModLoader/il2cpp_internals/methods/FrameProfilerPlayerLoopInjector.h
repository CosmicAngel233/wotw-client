#include <interception_macros.h>

namespace app::methods::FrameProfilerPlayerLoopInjector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPreloadingCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0471D0E0, FrameProfilerPlayerLoopInjector_BeginPreloadingCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPreloadingCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0474E4B0, FrameProfilerPlayerLoopInjector_EndPreloadingCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPlayerLoopCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0472E7B0, FrameProfilerPlayerLoopInjector_BeginPlayerLoopCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPlayerLoopCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04772C90, FrameProfilerPlayerLoopInjector_EndPlayerLoopCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPhysicsCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0476E298, FrameProfilerPlayerLoopInjector_BeginPhysicsCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPhysicsCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04709A88, FrameProfilerPlayerLoopInjector_EndPhysicsCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginUpdateTimeCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0478C9D8, FrameProfilerPlayerLoopInjector_BeginUpdateTimeCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndUpdateTimeCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04737F68, FrameProfilerPlayerLoopInjector_EndUpdateTimeCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginWaitForPresentCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04706260, FrameProfilerPlayerLoopInjector_BeginWaitForPresentCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginFixedUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x047845C0, FrameProfilerPlayerLoopInjector_BeginFixedUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndFixedUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0474DB28, FrameProfilerPlayerLoopInjector_EndFixedUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginParticleUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04724C78, FrameProfilerPlayerLoopInjector_BeginParticleUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndParticleUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0477A110, FrameProfilerPlayerLoopInjector_EndParticleUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginParticleEndUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04747AC8, FrameProfilerPlayerLoopInjector_BeginParticleEndUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndParticleEndUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04798858, FrameProfilerPlayerLoopInjector_EndParticleEndUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0472C8E0, FrameProfilerPlayerLoopInjector_BeginUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x0477ECF8, FrameProfilerPlayerLoopInjector_EndUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginEarlyUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04722AC8, FrameProfilerPlayerLoopInjector_BeginEarlyUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndEarlyUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04727550, FrameProfilerPlayerLoopInjector_EndEarlyUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPreUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04737BC0, FrameProfilerPlayerLoopInjector_BeginPreUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPreUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04751410, FrameProfilerPlayerLoopInjector_EndPreUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPreLateUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x047410A0, FrameProfilerPlayerLoopInjector_BeginPreLateUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPreLateUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04767208, FrameProfilerPlayerLoopInjector_EndPreLateUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginPostLateUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x04726130, FrameProfilerPlayerLoopInjector_BeginPostLateUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndPostLateUpdateCallback, ());
    IL2CPP_REGISTER_METHODINFO(0x047639E8, FrameProfilerPlayerLoopInjector_EndPostLateUpdateCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectToPlayerLoopEarly, (app::PlayerLoopSystem * player_loop));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InjectToPlayerLoopLate, (app::PlayerLoopSystem * player_loop));
    IL2CPP_REGISTER_METHOD(0x03152F00, void, __cctor, ());
}