#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

#include <uber_states/state_applier.h>
#include <uber_states/uber_state_manager.h>

namespace
{
    constexpr int TULEY_EXISTS_UBER_STATE = 300;
    constexpr int32_t TULEY_EXISTS = -456942105;
    constexpr int32_t TULEY_GONE = 682604868;

    int32_t tuley_state(app::NewSetupStateController* controller, int32_t state, int32_t context) {
        return uber_states::get_uber_state_value(uber_states::constants::RANDO_STATE_GROUP_ID, TULEY_EXISTS_UBER_STATE) > 0.5f ? TULEY_EXISTS : TULEY_GONE;
    }

    void initialize_tuley()
    {
        uber_states::register_applier_intercept(TULEY_EXISTS, tuley_state);
        uber_states::register_applier_intercept(TULEY_GONE, tuley_state);
    }

    CALL_ON_INIT(initialize_tuley);
}
