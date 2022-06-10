#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::Promises::EnumerableExt {
    IL2CPP_REGISTER_METHOD(0x0156C730, app::IEnumerable_1_System_Object_ *, Empty, ());
    IL2CPP_REGISTER_METHOD(0x00E7D170, app::IEnumerable_1_System_Object_ *, LazyEach, (app::IEnumerable_1_System_Object_ * source, app::Action_1_Object_ * fn));
    IL2CPP_REGISTER_METHOD(0x015E7050, void, Each_1, (app::IEnumerable_1_System_Object_ * source, app::Action_1_Object_ * fn));
    IL2CPP_REGISTER_METHOD(0x015E7270, void, Each_2, (app::IEnumerable_1_System_Object_ * source, app::Action_2_Object_Int32_ * fn));
    IL2CPP_REGISTER_METHOD(0x015E76E0, void, Each_3, (app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * source, app::Action_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * fn));
    IL2CPP_REGISTER_METHODINFO(0x0470B2D0, EnumerableExt_Each_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E74B0, void, Each_4, (app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ * source, app::Action_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ * fn));
    IL2CPP_REGISTER_METHODINFO(0x0472DDB8, EnumerableExt_Each_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x015E7270, void, Each_5, (app::IEnumerable_1_ZenFulcrum_EmbeddedBrowser_IPromise_ * source, app::Action_2_ZenFulcrum_EmbeddedBrowser_IPromise_Int32_ * fn));
    IL2CPP_REGISTER_METHODINFO(0x04769728, EnumerableExt_Each_4__MethodInfo);
}