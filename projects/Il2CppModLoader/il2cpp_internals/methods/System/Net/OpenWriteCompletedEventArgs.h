#include <interception_macros.h>

namespace app::methods::System::Net::OpenWriteCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, __ctor_1, (app::OpenWriteCompletedEventArgs * this_ptr, app::Stream * result, app::Exception * exception, bool cancelled, app::Object * user_token));
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Stream *, get_Result, (app::OpenWriteCompletedEventArgs * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01BCB2D0, void, __ctor_2, (app::OpenWriteCompletedEventArgs * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04731238, OpenWriteCompletedEventArgs__ctor_1__MethodInfo);
}