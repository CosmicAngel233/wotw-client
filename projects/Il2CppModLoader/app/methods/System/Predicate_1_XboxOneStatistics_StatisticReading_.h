#include <interception_macros.h>

namespace app::methods::System::Predicate_1_XboxOneStatistics_StatisticReading_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::XboxOneStatistics_StatisticReading obj))
    IL2CPP_REGISTER_METHOD(0x02A57150, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::XboxOneStatistics_StatisticReading obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_XboxOneStatistics_StatisticReading_ * this_ptr, app::IAsyncResult * result))
}