#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ArraySortHelper_1_LoadDebugMenuPage_DebugSaveInfo_ {
    IL2CPP_REGISTER_METHOD(0x02F61550, void, Sort_1, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x047910F0, ArraySortHelper_1_LoadDebugMenuPage_DebugSaveInfo__Sort__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02F61870, int32_t, BinarySearch, (app::LoadDebugMenuPage_DebugSaveInfo__Array * array, int32_t index, int32_t length, app::LoadDebugMenuPage_DebugSaveInfo value, app::IComparer_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x0477AF08, ArraySortHelper_1_LoadDebugMenuPage_DebugSaveInfo__BinarySearch__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02F61A20, void, Sort_2, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHODINFO(0x04708048, ArraySortHelper_1_LoadDebugMenuPage_DebugSaveInfo__Sort_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::LoadDebugMenuPage_DebugSaveInfo__Array * array, int32_t index, int32_t length, app::LoadDebugMenuPage_DebugSaveInfo value, app::IComparer_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, app::Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer, int32_t a, int32_t b));
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::LoadDebugMenuPage_DebugSaveInfo__Array * a, int32_t i, int32_t j));
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::LoadDebugMenuPage_DebugSaveInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LoadDebugMenuPage_DebugSaveInfo_ * comparer));
}