#pragma once
#include <interception_macros.h>

namespace app::methods::PreRecordingData {
    IL2CPP_REGISTER_METHOD(0x00C6CEA0, void, RemoveInvalidEntries, (app::PreRecordingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6D230, void, Clear, (app::PreRecordingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C6D340, void, ctor, (app::PreRecordingData * this_ptr))
}
