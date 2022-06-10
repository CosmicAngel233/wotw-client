#include <interception_macros.h>

namespace app::methods::EntityData {
    IL2CPP_REGISTER_METHOD(0x00C8F220, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::EntityData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C8F230, void, Initialize, (app::EntityData * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00C8F750, void, Record, (app::BinaryWriter * binary_writer));
    IL2CPP_REGISTER_METHOD(0x00C8FCD0, void, Save, (app::EntityData * this_ptr, app::BinaryWriter * binary_writer));
    IL2CPP_REGISTER_METHOD(0x00C90230, void, Load, (app::EntityData * this_ptr, app::BinaryReader * binary_reader, int32_t current_version));
    IL2CPP_REGISTER_METHOD(0x00C90550, void, __ctor, (app::EntityData * this_ptr));
}