#include <interception_macros.h>

namespace app::methods::Moon::Race::ReplayValidator {
    IL2CPP_REGISTER_METHOD(0x00C499E0, bool, IsValid, (app::String * race_id, app::String * replay_data, int32_t score, app::ITrialData * trial_data, app::RaceSettings * race_settings, bool uploading));
    IL2CPP_REGISTER_METHOD(0x00C49AF0, app::ReplayValidator_ValidReason, IsValidReason, (app::String * race_id, app::String * replay_data, int32_t score, app::ReplayValidatorData * validator_data, app::RaceSettings * race_settings, bool uploading));
    IL2CPP_REGISTER_METHOD(0x00C4C170, bool, InfiniteJumpsUsed, (int32_t jump_count, float start_y, app::Nullable_1_UnityEngine_Vector3_ end_pos));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}