#include <interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse_ServerFailedToRespond {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::ISteamMatchmakingServerListResponse_ServerFailedToRespond * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x015FF360, void, Invoke, (app::ISteamMatchmakingServerListResponse_ServerFailedToRespond * this_ptr, app::HServerListRequest h_request, int32_t i_server));
IL2CPP_REGISTER_METHOD(0x015FF7A0, IAsyncResult *, BeginInvoke, (app::ISteamMatchmakingServerListResponse_ServerFailedToRespond * this_ptr, app::HServerListRequest h_request, int32_t i_server, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingServerListResponse_ServerFailedToRespond * this_ptr, app::IAsyncResult * result));
}
