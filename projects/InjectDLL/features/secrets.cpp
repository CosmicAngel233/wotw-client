#include <randomizer/settings.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/PlayerSpiritShards.h>

using namespace app::methods;

namespace {
    IL2CPP_INTERCEPT(PlayerSpiritShards, bool, IsGlobalShardEquipped_1, (app::PlayerSpiritShards * this_ptr, app::SpiritShardType__Enum value)) {
        if (randomizer::settings::show_secrets() &&
            value == app::SpiritShardType__Enum::Sense)
            return true;

        return next::IsGlobalShardEquipped_1(this_ptr, value);
    }
} // namespace
