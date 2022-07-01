#pragma once

#include <map>
#include <unordered_map>
#include <string>
#include <variant>
#include <optional>
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

        bool operator<(const Location &other) const {
            return this->group == other.group
                   ? this->state_id < other.state_id
                   : this->group < other.group;
        }

        double get_value() const {
            return uber_states::UberState(group, state_id).get();
        }
    };

    struct LocationCondition {
        Comparison comparison;
        double condition_value;

        LocationCondition() : comparison(Comparison::NONE), condition_value(0.0) {};

        LocationCondition(Comparison comparison, double condition_value)
            : comparison(comparison),
              condition_value(condition_value) {};

        bool satisfied(const Location &location) const {
            if (comparison == Comparison::NONE) {
                return true;
            }

            auto location_value = location.get_value();

            switch (comparison) {
                case Comparison::EQ:
                    return location_value == condition_value;
                case Comparison::NEQ:
                    return location_value != condition_value;
                case Comparison::GTE:
                    return location_value >= condition_value;
                case Comparison::LTE:
                    return location_value <= condition_value;
                case Comparison::GT:
                    return location_value > condition_value;
                case Comparison::LT:
                    return location_value < condition_value;
            }

            throw std::exception("Comparison not implemented");
        }
    };

    class Action {
    private:
        /**
         * Holds pointers to all actions currently loaded
         */
        static std::vector<std::unique_ptr<Action>> stored_actions;

    protected:
        static void allocate(std::unique_ptr<Action>&& action) {
            stored_actions.push_back(std::move(action));
        }
    };

    class SpiritLightAction : public Action { // 0
    private:
        int amount;

    public:
        explicit SpiritLightAction(int amount) : amount(amount) {};
    };

    class SetUberStateAction : public Action { // 8
    private:
        uber_states::UberState uber_state;
        double value;

    public:
        SetUberStateAction(const uber_states::UberState &uber_state, double value) :
            uber_state(uber_state), value(value) {};

        SetUberStateAction(int group, int state, double value) :
            uber_state(uber_states::UberState(group, state)), value(value) {};
    };

    class ActionWithCondition {
    public:
        std::unique_ptr<Action> action;
        std::optional<LocationCondition> condition;

        explicit ActionWithCondition(std::unique_ptr<Action>&& action) {
            this->action = std::move(action);
        };

        ActionWithCondition(std::unique_ptr<Action>&& action, std::optional<LocationCondition> condition) : ActionWithCondition(std::move(action)) {
            this->condition = condition;
        };

        ActionWithCondition(std::unique_ptr<Action>&& action, const LocationCondition &condition) : ActionWithCondition(std::move(action)) {
            this->condition = condition;
        };
    };

    struct SeedData {
        std::unordered_map<std::string, std::string> meta;
        std::multimap<Location, ActionWithCondition> triggers;
    };
}