#include <interception_macros.h>

namespace app::methods::BreakablePhysicalSetupHolder {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (app::BreakablePhysicalSetupHolder * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4E400, BreakablePhysicalSetupData *, get_NewState, (app::BreakablePhysicalSetupHolder * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4E4B0, void, CacheSetupStates, (app::BreakablePhysicalSetupHolder * this_ptr, app::List_1_IIndexedItem_ * cache_to_populate));
IL2CPP_REGISTER_METHOD(0x00D4E590, void, StopTimelines, (app::BreakablePhysicalSetupHolder * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4E690, void, Perform, (app::BreakablePhysicalSetupHolder * this_ptr, app::BreakablePhysicalSetupData * state));
IL2CPP_REGISTER_METHOD(0x00D4E850, void, __ctor, (app::BreakablePhysicalSetupHolder * this_ptr));
}
