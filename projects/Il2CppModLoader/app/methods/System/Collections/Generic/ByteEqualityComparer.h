#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::ByteEqualityComparer {
    IL2CPP_REGISTER_METHOD(0x02021DC0, bool, Equals_1, (app::ByteEqualityComparer * this_ptr, uint8_t x, uint8_t y))
    IL2CPP_REGISTER_METHOD(0x0052E040, int32_t, GetHashCode_1, (app::ByteEqualityComparer * this_ptr, uint8_t b))
    IL2CPP_REGISTER_METHOD(0x02021DD0, int32_t, IndexOf, (app::ByteEqualityComparer * this_ptr, app::Byte__Array * array, uint8_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047452D8, ByteEqualityComparer_IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02022050, int32_t, LastIndexOf, (app::ByteEqualityComparer * this_ptr, app::Byte__Array * array, uint8_t value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x020220B0, bool, Equals_2, (app::ByteEqualityComparer * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02022170, int32_t, GetHashCode_2, (app::ByteEqualityComparer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020221D0, void, ctor, (app::ByteEqualityComparer * this_ptr))
}