#include <interception_macros.h>

namespace app::methods::MessageParserUtility {
    IL2CPP_REGISTER_METHOD(0x0159B7F0, app::String__Array *, ProcessStringArray, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x0159B9B0, app::String *, ProcessString, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x0159D370, void, Replace, (app::String * replace, app::String * with))
    IL2CPP_REGISTER_METHOD(0x0159D470, void, ProcessColorsInString, (app::StringBuilder * builder))
}