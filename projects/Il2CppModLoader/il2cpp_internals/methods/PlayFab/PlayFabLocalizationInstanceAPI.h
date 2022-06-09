#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabLocalizationInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::PlayFabLocalizationInstanceAPI * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_2, (app::PlayFabLocalizationInstanceAPI * this_ptr, app::PlayFabApiSettings * settings));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor_3, (app::PlayFabLocalizationInstanceAPI * this_ptr, app::PlayFabAuthenticationContext * context));
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor_4, (app::PlayFabLocalizationInstanceAPI * this_ptr, app::PlayFabApiSettings * settings, app::PlayFabAuthenticationContext * context));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (app::PlayFabLocalizationInstanceAPI * this_ptr, app::PlayFabAuthenticationContext * context));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext *, GetAuthenticationContext, (app::PlayFabLocalizationInstanceAPI * this_ptr));
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (app::PlayFabLocalizationInstanceAPI * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A2DA20, void, GetLanguageList, (app::PlayFabLocalizationInstanceAPI * this_ptr, app::GetLanguageListRequest * request, app::Action_1_PlayFab_LocalizationModels_GetLanguageListResponse_ * result_callback, app::Action_1_PlayFab_PlayFabError_ * error_callback, app::Object * custom_data, app::Dictionary_2_System_String_System_String_ * extra_headers));
}
