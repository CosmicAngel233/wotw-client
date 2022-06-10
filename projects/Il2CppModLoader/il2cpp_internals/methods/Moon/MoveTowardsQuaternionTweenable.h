#include <interception_macros.h>

namespace app::methods::Moon::MoveTowardsQuaternionTweenable {
    IL2CPP_REGISTER_METHOD(0x01BAB3B0, app::Quaternion, Update, (app::MoveTowardsQuaternionTweenable * this_ptr, app::Quaternion current_value, app::Quaternion start_value, app::Quaternion end_value, float speed));
    IL2CPP_REGISTER_METHOD(0x01BAB4A0, bool, HasFinished, (app::MoveTowardsQuaternionTweenable * this_ptr, app::Quaternion current_value, app::Quaternion start_value, app::Quaternion end_value, float speed));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MoveTowardsQuaternionTweenable * this_ptr));
}