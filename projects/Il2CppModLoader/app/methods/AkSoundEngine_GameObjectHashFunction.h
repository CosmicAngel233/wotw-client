#include <interception_macros.h>

namespace app::methods::AkSoundEngine_GameObjectHashFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AkSoundEngine_GameObjectHashFunction * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, uint64_t, Invoke, (app::AkSoundEngine_GameObjectHashFunction * this_ptr, app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::AkSoundEngine_GameObjectHashFunction * this_ptr, app::GameObject * game_object, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, uint64_t, EndInvoke, (app::AkSoundEngine_GameObjectHashFunction * this_ptr, app::IAsyncResult * result))
}