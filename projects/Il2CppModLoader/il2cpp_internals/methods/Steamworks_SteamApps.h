#include <interception_macros.h>

namespace app::methods::Steamworks::SteamApps {
IL2CPP_REGISTER_METHOD(0x027E27D0, bool, BIsSubscribed, ());
IL2CPP_REGISTER_METHOD(0x027E27F0, bool, BIsLowViolence, ());
IL2CPP_REGISTER_METHOD(0x027E2810, bool, BIsCybercafe, ());
IL2CPP_REGISTER_METHOD(0x027E2830, bool, BIsVACBanned, ());
IL2CPP_REGISTER_METHOD(0x027E2850, String *, GetCurrentGameLanguage, ());
IL2CPP_REGISTER_METHOD(0x027E2880, String *, GetAvailableGameLanguages, ());
IL2CPP_REGISTER_METHOD(0x027E28B0, bool, BIsSubscribedApp, (app::AppId_t app_i_d));
IL2CPP_REGISTER_METHOD(0x027E28E0, bool, BIsDlcInstalled, (app::AppId_t app_i_d));
IL2CPP_REGISTER_METHOD(0x027E2910, uint32_t, GetEarliestPurchaseUnixTime, (app::AppId_t n_app_i_d));
IL2CPP_REGISTER_METHOD(0x027E2940, bool, BIsSubscribedFromFreeWeekend, ());
IL2CPP_REGISTER_METHOD(0x027E2960, int32_t, GetDLCCount, ());
IL2CPP_REGISTER_METHOD(0x027E2980, bool, BGetDLCDataByIndex, (int32_t i_d_l_c, app::AppId_t * p_app_i_d, app::bool * pb_available, app::String * * pch_name, int32_t cch_name_buffer_size));
IL2CPP_REGISTER_METHOD(0x027E2AD0, void, InstallDLC, (app::AppId_t n_app_i_d));
IL2CPP_REGISTER_METHOD(0x027E2B00, void, UninstallDLC, (app::AppId_t n_app_i_d));
IL2CPP_REGISTER_METHOD(0x027E2B30, void, RequestAppProofOfPurchaseKey, (app::AppId_t n_app_i_d));
IL2CPP_REGISTER_METHOD(0x027E2B60, bool, GetCurrentBetaName, (app::String * * pch_name, int32_t cch_name_buffer_size));
IL2CPP_REGISTER_METHOD(0x027E2C80, bool, MarkContentCorrupt, (bool b_missing_files_only));
IL2CPP_REGISTER_METHOD(0x027E2CB0, uint32_t, GetInstalledDepots, (app::AppId_t app_i_d, app::DepotId_t__Array * pvec_depots, uint32_t c_max_depots));
IL2CPP_REGISTER_METHOD(0x027E2D00, uint32_t, GetAppInstallDir, (app::AppId_t app_i_d, app::String * * pch_folder, uint32_t cch_folder_buffer_size));
IL2CPP_REGISTER_METHOD(0x027E2E30, bool, BIsAppInstalled, (app::AppId_t app_i_d));
IL2CPP_REGISTER_METHOD(0x027E2E60, CSteamID, GetAppOwner, ());
IL2CPP_REGISTER_METHOD(0x027E2F10, String *, GetLaunchQueryParam, (app::String * pch_key));
IL2CPP_REGISTER_METHOD(0x027E3120, bool, GetDlcDownloadProgress, (app::AppId_t n_app_i_d, app::uint64_t * pun_bytes_downloaded, app::uint64_t * pun_bytes_total));
IL2CPP_REGISTER_METHOD(0x027E3170, int32_t, GetAppBuildId, ());
IL2CPP_REGISTER_METHOD(0x027E3190, void, RequestAllProofOfPurchaseKeys, ());
IL2CPP_REGISTER_METHOD(0x027E31B0, SteamAPICall_t, GetFileDetails, (app::String * psz_file_name));
IL2CPP_REGISTER_METHOD(0x027E33D0, int32_t, GetLaunchCommandLine, (app::String * * psz_command_line, int32_t cub_command_line));
IL2CPP_REGISTER_METHOD(0x027E34F0, bool, BIsSubscribedFromFamilySharing, ());
}
