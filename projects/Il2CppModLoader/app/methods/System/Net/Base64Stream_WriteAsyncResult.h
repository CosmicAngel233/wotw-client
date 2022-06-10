#include <interception_macros.h>

namespace app::methods::System::Net::Base64Stream_WriteAsyncResult {
    IL2CPP_REGISTER_METHOD(0x020139E0, void, ctor, (app::Base64Stream_WriteAsyncResult * this_ptr, app::Base64Stream * parent, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x02014150, void, Write, (app::Base64Stream_WriteAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02014420, void, CompleteWrite, (app::Base64Stream_WriteAsyncResult * this_ptr, app::IAsyncResult * result))
    IL2CPP_REGISTER_METHOD(0x02014490, void, OnWrite, (app::IAsyncResult * result))
    IL2CPP_REGISTER_METHODINFO(0x0474F0A8, Base64Stream_WriteAsyncResult_OnWrite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02014620, void, End, (app::IAsyncResult * result))
    IL2CPP_REGISTER_METHOD(0x02014740, void, cctor, ())
}