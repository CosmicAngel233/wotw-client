#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::ComponentModel::CultureInfoConverter_CultureComparer {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CultureInfoConverter_CultureComparer * this_ptr, app::CultureInfoConverter * culture_converter))
    IL2CPP_REGISTER_METHOD(0x01FDB700, int32_t, Compare, (app::CultureInfoConverter_CultureComparer * this_ptr, app::Object * item1, app::Object * item2))
}
