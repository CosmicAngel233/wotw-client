#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative {
    IL2CPP_REGISTER_METHOD(0x01C74AB0, app::String *, get_LocalUrlPrefix, ());
    IL2CPP_REGISTER_METHOD(0x01C74B30, bool, get_NativeLoaded, ());
    IL2CPP_REGISTER_METHOD(0x01C74BD0, void, set_NativeLoaded, (bool value));
    IL2CPP_REGISTER_METHOD(0x01C74C80, bool, get_SymbolsLoaded, ());
    IL2CPP_REGISTER_METHOD(0x01C74D20, void, set_SymbolsLoaded, (bool value));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LogCallback, (app::String * message));
    IL2CPP_REGISTER_METHODINFO(0x04763008, BrowserNative_LogCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C74DD0, app::String *, get_ProfilePath, ());
    IL2CPP_REGISTER_METHOD(0x01C74E70, void, set_ProfilePath, (app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x0476F208, BrowserNative_set_ProfilePath__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C74F70, void, LoadSymbols, ());
    IL2CPP_REGISTER_METHODINFO(0x047423E8, BrowserNative_LoadSymbols__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C750B0, void, LoadNative, ());
    IL2CPP_REGISTER_METHODINFO(0x0475CFB8, BrowserNative_LoadNative__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C75BE0, void, FixProcessPermissions, (app::FileLocations_CEFDirs * dirs));
    IL2CPP_REGISTER_METHOD(0x01C75C20, void, HandLoadSymbols, (app::String * binaries_path));
    IL2CPP_REGISTER_METHOD(0x01C75F00, void, ClearSymbols, ());
    IL2CPP_REGISTER_METHOD(0x01C760C0, app::String *, GetLibError, ());
    IL2CPP_REGISTER_METHOD(0x01C76280, void *, OpenLib, (app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x04727B30, BrowserNative_OpenLib__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C764A0, void, CloseLib, ());
    IL2CPP_REGISTER_METHODINFO(0x047645D8, BrowserNative_CloseLib__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C76700, void *, GetFunc, (void * lib_handle, app::String * fn_name));
    IL2CPP_REGISTER_METHODINFO(0x0478A9B8, BrowserNative_GetFunc__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C76970, void *, LoadLibraryW, (app::String * lp_file_name));
    IL2CPP_REGISTER_METHOD(0x01C76A60, void *, GetProcAddress, (void * h_module, app::String * proc_name));
    IL2CPP_REGISTER_METHOD(0x01C76C30, bool, FreeLibrary, (void * h_module));
    IL2CPP_REGISTER_METHOD(0x01C76D30, void, NewRequestCallback, (int32_t request_id, app::String * url));
    IL2CPP_REGISTER_METHODINFO(0x04748C20, BrowserNative_NewRequestCallback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C76E10, void, UnloadNative, ());
    IL2CPP_REGISTER_METHOD(0x01C77050, void, __cctor, ());
}