#include <interception_macros.h>

namespace app::methods::System_Net::HttpStreamAsyncResult {
    IL2CPP_REGISTER_METHOD(0x01E59310, void, Complete_1, (app::HttpStreamAsyncResult * this_ptr, app::Exception * e));
    IL2CPP_REGISTER_METHOD(0x01E59320, void, Complete_2, (app::HttpStreamAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Object *, get_AsyncState, (app::HttpStreamAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E59430, app::WaitHandle *, get_AsyncWaitHandle, (app::HttpStreamAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E59680, bool, get_CompletedSynchronously, (app::HttpStreamAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E59690, bool, get_IsCompleted, (app::HttpStreamAsyncResult * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E59780, void, __ctor, (app::HttpStreamAsyncResult * this_ptr));
}
