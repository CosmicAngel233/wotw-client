#include <interception_macros.h>

namespace app::methods::System::Action_1_Trail_TrailPosition_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Action_1_Trail_TrailPosition_ * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::Action_1_Trail_TrailPosition_ * this_ptr, app::Trail_TrailPosition obj));
    IL2CPP_REGISTER_METHOD(0x02C087C0, app::IAsyncResult *, BeginInvoke, (app::Action_1_Trail_TrailPosition_ * this_ptr, app::Trail_TrailPosition obj, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Trail_TrailPosition_ * this_ptr, app::IAsyncResult * result));
}