#pragma once

#include <map>
#include <unordered_map>
#include <string>
#include <variant>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_interface.h>

namespace randomizer::seed::data {
    enum class ActionType : int {
        SpiritLight = 0,
        SetUberState = 8,
    };

    enum class Comparison {
        NONE,
        EQ,
        NEQ,
        GTE,
        LTE,
        GT,
        LT,
    };

    struct Location {
        int group;
        int state_id;

        Comparison comparison;
        double condition_value;

        Location(int group, int stateId)
            : group(group),
              state_id(stateId),
              comparison(Comparison::NONE),
              condition_value(0.0) {}

        Location(int group, int stateId, Comparison comparison, double condition_value)
            : group(group),
              state_id(stateId),
              comparison(comparison),
              condition_value(condition_value) {}
    };

    struct SpiritLightAction { // 0
        int amount;

        explicit SpiritLightAction(int amount) : amount(amount) {}
    };

    struct SetUberStateAction { // 8
        uber_states::UberState uber_state;
        double value;

        SetUberStateAction(const uber_states::UberState &uber_state, double value) :
            uber_state(uber_state), value(value) {}

        SetUberStateAction(int group, int state, double value) :
            uber_state(uber_states::UberState(group, state)), value(value) {}
    };

    typedef std::variant<
        SpiritLightAction,
        SetUberStateAction
    > Action;

    struct SeedData {
        std::unordered_map<std::string, std::string> meta;
        std::multimap<Location, Action> triggers;
    };
}