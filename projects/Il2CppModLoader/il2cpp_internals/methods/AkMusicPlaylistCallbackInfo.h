#include <interception_macros.h>

namespace app::methods::AkMusicPlaylistCallbackInfo {
IL2CPP_REGISTER_METHOD(0x01881EE0, void, __ctor_1, (app::AkMusicPlaylistCallbackInfo * this_ptr, app::void * c_ptr, bool c_memory_own));
IL2CPP_REGISTER_METHOD(0x01881FB0, void *, getCPtr, (app::AkMusicPlaylistCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x01882040, void, setCPtr, (app::AkMusicPlaylistCallbackInfo * this_ptr, app::void * c_ptr));
IL2CPP_REGISTER_METHOD(0x01882100, void, Finalize, (app::AkMusicPlaylistCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x018821A0, void, Dispose, (app::AkMusicPlaylistCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x018823C0, uint32_t, get_playlistID, (app::AkMusicPlaylistCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x018824E0, uint32_t, get_uNumPlaylistItems, (app::AkMusicPlaylistCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01882600, uint32_t, get_uPlaylistSelection, (app::AkMusicPlaylistCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01882720, uint32_t, get_uPlaylistItemDone, (app::AkMusicPlaylistCallbackInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x01882840, void, __ctor_2, (app::AkMusicPlaylistCallbackInfo * this_ptr));
}
