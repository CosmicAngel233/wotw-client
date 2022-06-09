#include <interception_macros.h>

namespace app::methods::CleanupCaptureAgent {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsCaptureAgentValid, (app::CleanupCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::CleanupCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTestEnd, (app::CleanupCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x01324170, String__Array *, GetDataHeaderNames, (app::CleanupCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHOD(0x01324540, String__Array *, GetFrameData_1, (app::CleanupCaptureAgent * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04733D70, CleanupCaptureAgent_GetFrameData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01324590, void, GetFrameData_2, (app::CleanupCaptureAgent * this_ptr, app::FrameCaptureTester_AgentOutput * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CleanupCaptureAgent * this_ptr));
}
