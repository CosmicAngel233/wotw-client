#include <interception_macros.h>

namespace app::methods::Moon::LerpFloatTweenable {
IL2CPP_REGISTER_METHOD(0x01BAA5A0, float, Update, (app::LerpFloatTweenable * this_ptr, float start_value, float end_value, float normalized_input));
IL2CPP_REGISTER_METHOD(0x01BAA670, bool, HasFinished, (app::LerpFloatTweenable * this_ptr, float current_value, float end_value, float normalized_input));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::LerpFloatTweenable * this_ptr));
}
