#include "reader.h"
#include <string>
#include <Common/ext.h>

using namespace randomizer::seed::data;
using namespace antlr4;

namespace randomizer::seed::reader {
    /**
     * We found a metadata definition line (e.g. #something: foo bar)
     * @param ctx
     * @return
     */
    std::any SeedDataReader::visitMetadataDef(SeedParser::MetadataDefContext *ctx) {
        this->seed->meta[ctx->metadataKey()->getText()] = ctx->metadataValue()->getText();
        return nullptr;
    }

    /**
     * We found a trigger line (e.g. 13|37|....)
     * @param ctx
     * @return
     */
    std::any SeedDataReader::visitTriggerLine(SeedParser::TriggerLineContext *ctx) {
        auto str = ctx->trigger()->uberGroup()->getText();
        auto location_group = std::stoi(str);
        auto location_state = std::stoi(ctx->trigger()->uberState()->getText());

        Location location {location_group, location_state};
        this->visitAction(location, ctx->action());

        return nullptr;
    }

    /**
     * Process the Action in context of the Location previously found on this line
     * @param location
     * @param ctx
     */
    void SeedDataReader::visitAction(Location location, SeedParser::ActionContext *ctx) {
        auto str = ctx->actionType()->getText();
        auto action_int = std::stoi(str);

        auto arguments = ctx->actionArgument();

        switch (static_cast<ActionType>(action_int)) {
            case ActionType::SetUberState:
                if (arguments.size() != 4) {
                    this->addError(ctx, "Expected exactly 4 arguments for SetUberState command");
                    return;
                }

                auto uber_group = std::stoi(arguments[0]->getText());
                auto uber_state = std::stoi(arguments[1]->getText());
                auto uber_type_name = arguments[2]->getText();
                auto value_string = arguments[3]->getText();
                auto value = parseDoubleFromUberTypeAndValue(ctx, uber_type_name, value_string);

                SetUberStateAction action(uber_group, uber_state, value);
                this->seed->triggers.emplace(location, action);
                break;
        }
    }

    double SeedDataReader::parseDoubleFromUberTypeAndValue(antlr4::ParserRuleContext *ctx, const std::string& type_name, std::string value) {
        if (type_name == "float") {
            return static_cast<double>(std::stof(value));
        } else if (type_name == "int" || type_name == "byte") {
            return static_cast<double>(std::stoi(value));
        } else if (type_name == "bool" || type_name == "teleporter") {
            return value == "true" ? 1.0 : 0.0;
        }

        this->addError(ctx, format("Unknown uber state type '%s'", type_name.c_str()));

        return 0.0;
    }

    // region Helper Functions

    void SeedDataReader::addError(const Error& error) {
        this->errors.push_back(error);
    }

    void SeedDataReader::addError(size_t line, size_t column, std::string_view message) {
        this->addError(Error {line, column, message.data()});
    }

    void SeedDataReader::addError(antlr4::Token *token, std::string_view message) {
        this->addError(token->getLine(), token->getCharPositionInLine(), message);
    }

    void SeedDataReader::addError(antlr4::ParserRuleContext *ctx, std::string_view message) {
        this->addError(ctx->stop->getLine(), ctx->stop->getCharPositionInLine(), message);
    }

    // endregion
}