#pragma once

#include "data.h"
#include "generated/SeedParserBaseVisitor.h"

using namespace randomizer::seed::language;
using namespace randomizer::seed::data;

namespace randomizer::seed::reader {
    struct Error {
        size_t line = 0;
        size_t column = 0;
        std::string message;
    };

    class SeedDataReader : public SeedParserBaseVisitor {

    public:
        explicit SeedDataReader(SeedData *seed) : seed(seed) {}

        std::any visitMetadataDef(SeedParser::MetadataDefContext *ctx) override;
        std::any visitTriggerLine(SeedParser::TriggerLineContext *ctx) override;
        void visitAction(Location location, SeedParser::ActionContext *ctx);

        const std::vector<Error>& getErrors() {
            return errors;
        }

    private:
        SeedData *seed{};
        std::vector<Error> errors;

        double parseDoubleFromUberTypeAndValue(antlr4::ParserRuleContext *ctx, const std::string& type_name, std::string value);

        void addError(const Error& error);
        void addError(size_t line, size_t column, std::string_view message);
        void addError(antlr4::Token* token, std::string_view message);
        void addError(antlr4::ParserRuleContext *ctx, std::string_view message);
    };
}