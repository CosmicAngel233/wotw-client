#include <interception_macros.h>

namespace app::methods::Moon::Setups::ChangeStateSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00E253C0, app::String *, get_NewStateName, (app::ChangeStateSetupHolder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, (app::ChangeStateSetupHolder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E25440, app::ChangeStateSetupData *, get_NewState, (app::ChangeStateSetupHolder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00E254F0, void, CacheSetupStates, (app::ChangeStateSetupHolder * this_ptr, app::List_1_IIndexedItem_ * cache_to_populate));
    IL2CPP_REGISTER_METHOD(0x00E255E0, bool, Perform, (app::ChangeStateSetupHolder * this_ptr, app::ChangeStateSetupData * state));
    IL2CPP_REGISTER_METHOD(0x00CA1C10, void, __ctor, (app::ChangeStateSetupHolder * this_ptr));
}