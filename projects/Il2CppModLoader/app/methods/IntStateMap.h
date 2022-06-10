#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::IntStateMap {
    IL2CPP_REGISTER_METHOD(0x01B5E220, app::List_1_GenericMappingEntry_ *, GetGenericMapping, (app::IntStateMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5E570, void, SetGenericMapping, (app::IntStateMap * this_ptr, int32_t state_guid, float generic_value))
    IL2CPP_REGISTER_METHOD(0x01B5E930, void, ctor, (app::IntStateMap * this_ptr))
}
