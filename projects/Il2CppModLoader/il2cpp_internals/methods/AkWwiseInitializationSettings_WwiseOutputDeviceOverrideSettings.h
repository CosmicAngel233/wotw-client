#include <interception_macros.h>

namespace app::methods::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings {
IL2CPP_REGISTER_METHOD(0x027078B0, String *, get_FilePath, ());
IL2CPP_REGISTER_METHOD(0x02707970, void, SaveApiOverride, (app::AkAudioAPI__Enum type));
IL2CPP_REGISTER_METHOD(0x02707AF0, void, SaveDeviceOutputOverride, (app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings * settings));
IL2CPP_REGISTER_METHOD(0x02707C70, AkAudioAPI__Enum, LoadApiOverride, ());
IL2CPP_REGISTER_METHOD(0x02707D80, AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings *, LoadOutputSettings, ());
IL2CPP_REGISTER_METHOD(0x02707F60, void, SetPanningRule, (app::AkPanningRule__Enum rule));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings * this_ptr));
}
