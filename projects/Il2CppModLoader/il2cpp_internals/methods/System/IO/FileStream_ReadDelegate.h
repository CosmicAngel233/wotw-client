#include <interception_macros.h>

namespace app::methods::System::IO::FileStream_ReadDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::FileStream_ReadDelegate * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01D2E1F0, int32_t, Invoke, (app::FileStream_ReadDelegate * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
    IL2CPP_REGISTER_METHOD(0x0236EEE0, app::IAsyncResult *, BeginInvoke, (app::FileStream_ReadDelegate * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::FileStream_ReadDelegate * this_ptr, app::IAsyncResult * result));
}
