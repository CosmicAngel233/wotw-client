#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_System_TimeSpan_ {
    IL2CPP_REGISTER_METHOD(0x02F7F160, void, Sort_1, (app::TimeSpan__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x04739800, ArraySortHelper_1_System_TimeSpan__Sort__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02F7F480, int32_t, BinarySearch, (app::TimeSpan__Array * array, int32_t index, int32_t length, app::TimeSpan value, app::IComparer_1_System_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0477F870, ArraySortHelper_1_System_TimeSpan__BinarySearch__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02F7F620, void, Sort_2, (app::TimeSpan__Array * keys, int32_t index, int32_t length, app::Comparison_1_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x04712980, ArraySortHelper_1_System_TimeSpan__Sort_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02F2B330, int32_t, InternalBinarySearch, (app::TimeSpan__Array * array, int32_t index, int32_t length, app::TimeSpan value, app::IComparer_1_System_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02F2B450, void, SwapIfGreater, (app::TimeSpan__Array * keys, app::Comparison_1_TimeSpan_ * comparer, int32_t a, int32_t b));
    IL2CPP_REGISTER_METHOD(0x02F2B5E0, void, Swap, (app::TimeSpan__Array * a, int32_t i, int32_t j));
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::TimeSpan__Array * keys, int32_t left, int32_t length, app::Comparison_1_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::TimeSpan__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02F2B660, int32_t, PickPivotAndPartition, (app::TimeSpan__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::TimeSpan__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02F2BA30, void, DownHeap, (app::TimeSpan__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_TimeSpan_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02F2BCF0, void, InsertionSort, (app::TimeSpan__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_TimeSpan_ * comparer));
}