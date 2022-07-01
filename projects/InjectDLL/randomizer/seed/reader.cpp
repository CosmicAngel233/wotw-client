#include "reader.h"
#include <Common/ext.h>
#include <regex>
#include <string>

using namespace randomizer::seed::data;
using namespace antlr4;

namespace randomizer::seed::reader {
    namespace {
        Comparison read_comparison(antlr4::ParserRuleContext* ctx) {
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

        int read_int(antlr4::ParserRuleContext* ctx) {
            try {
                return std::stoi(ctx->getText());
            } catch (const std::invalid_argument& e) {
                throw ParseError("Invalid integer");
            } catch (const std::out_of_range& e) {
                throw ParseError("Integer out of range");
            }
        }

        double read_double(antlr4::ParserRuleContext* ctx) {
            try {
                return std::stod(ctx->getText());
            } catch (const std::invalid_argument& e) {
                throw ParseError("Invalid double");
            } catch (const std::out_of_range& e) {
                throw ParseError("Double out of range");
            }
        }

        double read_double_from_uber_type_and_value(antlr4::ParserRuleContext* type_ctx, antlr4::ParserRuleContext* value_ctx) {
            auto type_name = type_ctx->getText();
            auto value = value_ctx->getText();

            if (type_name == "float") {
                return static_cast<double>(std::stof(value));
            } else if (type_name == "int" || type_name == "byte") {
                return static_cast<double>(std::stoi(value));
            } else if (type_name == "bool" || type_name == "teleporter") {
                return value == "true" ? 1.0 : 0.0;
            }

            throw ParseError(format("Unknown uber state type '%s'", type_name.c_str()));
        }
    } // namespace

    /**
     * Called for each line. This catches ParseErrors and adds them to the error vector.
     * @param ctx
     * @return
     */
    std::any SeedDataReader::visitLine(SeedParser::LineContext* ctx) {
        try {
            return SeedParserBaseVisitor::visitLine(ctx);
        } catch (ParseError& error) {
            this->addError(ctx, error.message);
            return nullptr;
        }
    }

    /**
     * We found a metadata definition line (e.g. #something: foo bar)
     * @param ctx
     * @return
     */
    std::any SeedDataReader::visitMetadataDef(SeedParser::MetadataDefContext* ctx) {
        this->seed->meta[ctx->metadataKey()->getText()] = ctx->metadataValue()->getText();
        return nullptr;
    }

    /**
     * We found a trigger line (e.g. 13|37|....)
     * @param ctx
     * @return
     */
    std::any SeedDataReader::visitTriggerLine(SeedParser::TriggerLineContext* ctx) {
        auto location_group = read_int(ctx->trigger()->uberGroup());
        auto location_state = ctx->trigger()->uberState();

        if (location_state->uberStateCondition()) {
            auto condition_ctx = location_state->uberStateCondition();

            Location location{
                location_group,
                read_int(condition_ctx->uberStateId()),
            };

            LocationCondition condition{
                read_comparison(condition_ctx->comparison()),
                read_double(condition_ctx->number()),
            };

            this->visitAction(location, condition, ctx->action());
        } else {
            Location location{ location_group, read_int(location_state->uberStateId()) };
            this->visitAction(location, std::nullopt, ctx->action());
        }

        return nullptr;
    }

    /**
     * Process the Action in context of the Location previously found on this line
     * @param location
     * @param ctx
     */
    void SeedDataReader::visitAction(Location location, std::optional<LocationCondition> condition, SeedParser::ActionContext* ctx) {
        auto str = ctx->actionType()->getText();
        auto action_int = std::stoi(str);

        auto arguments = ctx->actionArgument();

        switch (static_cast<ActionType>(action_int)) {
            case ActionType::SpiritLight: {
                if (arguments.empty()) {
                    throw ParseError("Expected 1 argument for SpiritLight command", ctx);
                }

                auto amount = read_int(arguments[0]);
                auto action = std::make_unique<SpiritLightAction>(amount);
                this->seed->triggers.emplace(location, ActionWithCondition(std::move(action), condition));
                break;
            }

            case ActionType::SetUberState: {
                if (arguments.size() < 4) {
                    throw ParseError("Expected 4 arguments for SetUberState command", ctx);
                }

                auto uber_group = read_int(arguments[0]);
                auto uber_state = read_int(arguments[1]);
                auto value = read_double_from_uber_type_and_value(arguments[2], arguments[3]);
                auto action = std::make_unique<SetUberStateAction>(uber_group, uber_state, value);
                this->seed->triggers.emplace(location, ActionWithCondition(std::move(action), condition));
                break;
            }
        }
    }

    // region Helper Functions

    void SeedDataReader::addError(const Error& error) {
        this->errors.push_back(error);
    }

    void SeedDataReader::addError(size_t line, size_t column, std::string_view message) {
        this->addError(Error{ line, column, message.data() });
    }

    void SeedDataReader::addError(antlr4::Token* token, std::string_view message) {
        this->addError(token->getLine(), token->getCharPositionInLine(), message);
    }

    void SeedDataReader::addError(antlr4::ParserRuleContext* ctx, std::string_view message) {
        this->addError(ctx->stop->getLine(), ctx->stop->getCharPositionInLine(), message);
    }

    // endregion
} // namespace randomizer::seed::reader