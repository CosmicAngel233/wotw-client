#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CreateObjectsOnGridTool {
    IL2CPP_REGISTER_METHOD(0x00DB7310, app::Shelf *, get_CurrentShelf, (app::CreateObjectsOnGridTool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB73D0, void, set_CurrentShelf, (app::CreateObjectsOnGridTool * this_ptr, app::Shelf * value))
    IL2CPP_REGISTER_METHOD(0x00DB7490, void, ctor, (app::CreateObjectsOnGridTool * this_ptr))
}
