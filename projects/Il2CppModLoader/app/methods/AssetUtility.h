#pragma once
#include <interception_macros.h>

namespace app::methods::AssetUtility {
    IL2CPP_REGISTER_METHOD(0x00841C30, app::String *, GetAssetName, (app::String * asset_path))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AssetUtility * this_ptr))
}
