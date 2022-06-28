#pragma once

#include <map>
#include <unordered_map>
#include <string>
#include <variant>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_interface.h>

namespace randomizer::seed::data {
    enum class ActionType : int {
        SetUberState = 8,
    };

    typedef std::pair<int, int> Location;

    struct SetUberStateAction {
        uber_states::UberState uber_state;
        double value;

        SetUberStateAction(const uber_states::UberState &uber_state, double value) :
            uber_state(uber_state), value(value) {}

        SetUberStateAction(int group, int state, double value) :
            uber_state(uber_states::UberState(group, state)), value(value) {}
    };

    typedef std::variant<
        SetUberStateAction
    > Action;

    struct SeedData {
        std::unordered_map<std::string, std::string> meta;
        std::multimap<Location, Action> triggers;
    };
}