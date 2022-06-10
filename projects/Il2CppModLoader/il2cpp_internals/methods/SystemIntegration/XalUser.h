#include <interception_macros.h>

namespace app::methods::SystemIntegration::XalUser {
    IL2CPP_REGISTER_METHOD(0x00CDE930, uint64_t, get_Id, (app::XalUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Texture2D *, get_Image, (app::XalUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Image, (app::XalUser * this_ptr, app::Texture2D * value));
    IL2CPP_REGISTER_METHOD(0x00CDE950, app::String *, get_GamerTag, (app::XalUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CDEA00, app::String *, get_Uid, (app::XalUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CDEB80, app::String *, get_SignInPrefix, (app::XalUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::XalUser * this_ptr, app::XalUser_1 * xal_user, app::Action * on_sign_out));
    IL2CPP_REGISTER_METHOD(0x00CDEC00, app::Task *, GetGamerPicture, (app::XalUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CDEF30, app::Task_1_System_Boolean_ *, BuildIntoUnityImage, (app::XalUser * this_ptr, app::Task_1_System_Byte_ * buffer));
    IL2CPP_REGISTER_METHODINFO(0x04797AD0, XalUser_BuildIntoUnityImage__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00CDF340, void, GetTokenAndSignatureSilentlyAsync, (app::XalUser * this_ptr, app::XalUserGetTokenAndSignatureArgs args, app::Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * on_complete, app::Action_1_Int32_ * on_error));
    IL2CPP_REGISTER_METHOD(0x00CDF390, void, SignOutIfPossible, (app::XalUser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00CDF5B0, void, _SignOutIfPossible_b__20_0, (app::XalUser * this_ptr, app::Task * t));
    IL2CPP_REGISTER_METHODINFO(0x04798348, XalUser__SignOutIfPossible_b__20_0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00CDF770, void, _SignOutIfPossible_b__20_1, (app::XalUser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0475DFF8, XalUser__SignOutIfPossible_b__20_1__MethodInfo);
}