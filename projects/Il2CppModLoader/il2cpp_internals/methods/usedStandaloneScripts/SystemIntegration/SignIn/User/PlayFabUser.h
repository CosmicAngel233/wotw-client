#include <interception_macros.h>

namespace app::methods::usedStandaloneScripts::SystemIntegration::SignIn::User::PlayFabUser {
    IL2CPP_REGISTER_METHOD(0x03127490, void, __ctor, (app::PlayFabUser * this_ptr, app::LoginResult * login_result));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Texture2D *, get_Image, (app::PlayFabUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_GamerTag, (app::PlayFabUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_GamerTag, (app::PlayFabUser * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Uid, (app::PlayFabUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03127650, app::String *, get_SignInPrefix, (app::PlayFabUser * this_ptr));
}