#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::Wwise::GameObjectExtensions {
    IL2CPP_REGISTER_METHOD(0x02709CD0, app::SoundHost *, DeduceSoundHostFromHierarchy, (app::Transform * target))
}
