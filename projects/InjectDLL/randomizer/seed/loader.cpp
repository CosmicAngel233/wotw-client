#include "data.h"
#include "reader.h"
#include <Common/ext.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <Il2CppModLoader/common.h>
#include <antlr4-runtime.h>
#include <chrono>
#include "generated/SeedParser.h"
#include "generated/SeedLexer.h"


using namespace antlr4;
using namespace randomizer::seed::reader;
using namespace randomizer::seed::data;
using namespace modloader::win::console;

namespace randomizer::seed::loader {
    void parse() {
        std::ifstream stream;
        stream.open("C:\\moon\\new-format.wotwr");

        std::stringstream buffer;
        buffer << stream.rdbuf();

        auto start_time = std::chrono::high_resolution_clock::now();

        ANTLRInputStream input(buffer);
        SeedLexer lexer(&input);

        CommonTokenStream tokens(&lexer);
        SeedParser parser(&tokens);

        parser.initialize();
        if (parser.getNumberOfSyntaxErrors() > 0) {
            console_send("Did not load seed because of parsing errors");
        } else {
            SeedData seed {};
            SeedDataReader reader(&seed);
            reader.visitFile(parser.file());

            auto time_span = duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start_time);

            console_send(format("- Seed loaded in %f ms -",  time_span.count() / 1000.f));
            console_send(format("meta count: %d", seed.meta.size()));
            console_send(format("trigger count: %d", seed.triggers.size()));

            auto errors = reader.getErrors();
            console_send(format("errors: %d", errors.size()));

            for (auto const& error : errors) {
                console_send(format("%d:%d - %s", error.line, error.column, error.message.c_str()));
            }
        }
    }

    CALL_ON_INIT(parse);
}