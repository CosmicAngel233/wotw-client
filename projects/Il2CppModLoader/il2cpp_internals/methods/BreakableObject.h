#include <interception_macros.h>

namespace app::methods::BreakableObject {
IL2CPP_REGISTER_METHOD(0x00D4B5A0, void, Start, (app::BreakableObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4B850, void, Hit, (app::BreakableObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4B870, void, BreakTheObject, (app::BreakableObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x00D4C310, void, OnTriggerEnter, (app::BreakableObject * this_ptr, app::Collider * collider));
IL2CPP_REGISTER_METHOD(0x00D4C450, void, __ctor, (app::BreakableObject * this_ptr));
}
