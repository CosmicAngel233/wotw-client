#include <interception_macros.h>

namespace app::methods::KwolokChase {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::KwolokChase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IUberState__Array *, get_AffectingUberStates, (app::KwolokChase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::List_1_UnityEngine_GameObject_ *, get_AllTargets, (app::KwolokChase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012FB370, void, Apply, (app::KwolokChase * this_ptr, app::UberStateApplyContext__Enum context));
    IL2CPP_REGISTER_METHOD(0x012FB3B0, void, OnEnable, (app::KwolokChase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012FB450, void, OnDisable, (app::KwolokChase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::KwolokChase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x012FB4F0, void, Update, (app::KwolokChase * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::KwolokChase * this_ptr));
}