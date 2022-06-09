#include <interception_macros.h>

namespace app::methods::Moon_Network_Web::ThreadedWebRequest_1_System_Object_ {
IL2CPP_REGISTER_METHOD(0x002FB950, Thread *, get_Thread, (app::ThreadedWebRequest_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02723010, void, __ctor, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::String * url, app::IRequest * request));
IL2CPP_REGISTER_METHOD(0x02723030, Thread *, Run, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ * callback));
IL2CPP_REGISTER_METHOD(0x02723280, void, Finish, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::WebResponse_1 * response));
IL2CPP_REGISTER_METHOD(0x027235B0, void, StartTimeout, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x02723830, void, StopTimeout, (app::ThreadedWebRequest_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02723890, void, TimeoutHandler, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::Object * sender, app::ElapsedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x02723B10, String *, ParamToString, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02723BB0, void, _Run_b__7_0, (app::ThreadedWebRequest_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02724430, void, _Run_b__7_1, (app::ThreadedWebRequest_1_System_Object_ * this_ptr, app::WebResponse_1 * response));
}
