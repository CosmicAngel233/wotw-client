#include <interception_macros.h>

namespace app::methods::TestReporter {
    IL2CPP_REGISTER_METHOD(0x010DA6C0, void, __ctor, (app::TestReporter * this_ptr, app::String * report_path));
    IL2CPP_REGISTER_METHOD(0x010DA9C0, void, ReportResult, (app::TestReporter * this_ptr, app::String * test_path, bool result, app::String * log_file_path));
    IL2CPP_REGISTER_METHOD(0x010DB0A0, void, FinalizeReport, (app::TestReporter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010DB390, void, SaveLastTestsReportPath, (app::TestReporter * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010DB690, app::String *, GetLastTestsReportPath, ());
}
