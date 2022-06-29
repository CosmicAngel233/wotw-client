#include "reader.h"
#include <string>
#include <regex>
#include <Common/ext.h>

using namespace randomizer::seed::data;
using namespace antlr4;

namespace randomizer::seed::reader {
    namespace {
        Comparison read_comparison(antlr4::ParserRuleContext *ctx) {
            auto str = ctx->getText();
            if (str == "=" || str == "==") {
                return Comparison::EQ;
            } else if (str == "!=") {
                return Comparison::NEQ;
            } else if (str == ">=") {
                return Comparison::GTE;
            } else if (str == ">") {
                return Comparison::GT;
            } else if (str == "<=") {
                return Comparison::LTE;
            } else if (str == "<") {
                return Comparison::LT;
            }

            throw ParseError("Unknown comparison symbol");
        }

        int read_int(antlr4::ParserRuleContext *ctx) {
            try {
                return std::stoi(ctx->getText());
            } catch (const std::invalid_argument &e) {
                throw ParseError("Invalid integer");
            } catch (const std::out_of_range &e) {
                throw ParseError("Integer out of range");
            }
        }

        double read_double(antlr4::ParserRuleContext *ctx) {
            try {
                return std::stod(ctx->getText());
            } catch (const std::invalid_argument &e) {
                throw ParseError("Invalid double");
            } catch (const std::out_of_range &e) {
                throw ParseError("Double out of range");
            }
        }
    }

    /**
     * Called for each line. This catches ParseErrors and adds them to the error vector.
     * @param ctx
     * @return
     */
    std::any SeedDataReader::visitLine(SeedParser::LineContext *ctx) {
        try {
            return SeedParserBaseVisitor::visitLine(ctx);
        } catch (ParseError &error) {
            this->addError(ctx, error.message);
        }
    }

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
        auto location_group = read_int(ctx->trigger()->uberGroup());
        auto location_state = ctx->trigger()->uberState();

        if (location_state->uberStateCondition()) {
            auto condition = location_state->uberStateCondition();

            Location location{
                location_group,
                read_int(condition->uberStateId()),
                read_comparison(condition->comparison()),
                read_double(condition->number()),
            };
            this->visitAction(location, ctx->action());
        } else {
            Location location{location_group, read_int(location_state->uberStateId())};
            this->visitAction(location, ctx->action());
        }

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
            case ActionType::SpiritLight:
                if (arguments.empty()) {
                    throw ParseError("Expected 1 argument for SpiritLight command", ctx);
                }


            case ActionType::SetUberState:
                if (arguments.size() < 4) {
                    throw ParseError("Expected 4 arguments for SetUberState command", ctx);
                }

                auto uber_group = read_int(arguments[0]);
                auto uber_state = read_int(arguments[1]);
                auto uber_type_name = arguments[2]->getText();
                auto value_string = arguments[3]->getText();
                auto value = parseDoubleFromUberTypeAndValue(ctx, uber_type_name, value_string);

                SetUberStateAction action(uber_group, uber_state, value);
                this->seed->triggers.emplace(location, action);
                break;
        }
    }

    double SeedDataReader::parseDoubleFromUberTypeAndValue(antlr4::ParserRuleContext *ctx, const std::string &type_name,
                                                           const std::string& value) {
        if (type_name == "float") {
            return static_cast<double>(std::stof(value));
        } else if (type_name == "int" || type_name == "byte") {
            return static_cast<double>(std::stoi(value));
        } else if (type_name == "bool" || type_name == "teleporter") {
            return value == "true" ? 1.0 : 0.0;
        }

        this->addError(ctx, format("Unknown uber state type '%s', using 0.0 as value", type_name.c_str()));

        return 0.0;
    }

    // region Helper Functions

    void SeedDataReader::addError(const Error &error) {
        this->errors.push_back(error);
    }

    void SeedDataReader::addError(size_t line, size_t column, std::string_view message) {
        this->addError(Error{line, column, message.data()});
    }

    void SeedDataReader::addError(antlr4::Token *token, std::string_view message) {
        this->addError(token->getLine(), token->getCharPositionInLine(), message);
    }

    void SeedDataReader::addError(antlr4::ParserRuleContext *ctx, std::string_view message) {
        this->addError(ctx->stop->getLine(), ctx->stop->getCharPositionInLine(), message);
    }

    // endregion
}