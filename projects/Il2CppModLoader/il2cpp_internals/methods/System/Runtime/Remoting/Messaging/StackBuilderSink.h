#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::StackBuilderSink {
    IL2CPP_REGISTER_METHOD(0x0231A770, void, __ctor, (app::StackBuilderSink * this_ptr, app::MarshalByRefObject * obj, bool force_internal_execute));
    IL2CPP_REGISTER_METHOD(0x0231A830, app::IMessage *, SyncProcessMessage, (app::StackBuilderSink * this_ptr, app::IMessage * msg));
    IL2CPP_REGISTER_METHOD(0x0231A950, app::IMessageCtrl *, AsyncProcessMessage, (app::StackBuilderSink * this_ptr, app::IMessage * msg, app::IMessageSink * reply_sink));
    IL2CPP_REGISTER_METHOD(0x0231AB80, void, ExecuteAsyncMessage, (app::StackBuilderSink * this_ptr, app::Object * ob));
    IL2CPP_REGISTER_METHOD(0x0231ADC0, void, CheckParameters, (app::StackBuilderSink * this_ptr, app::IMessage * msg));
    IL2CPP_REGISTER_METHODINFO(0x04719318, StackBuilderSink_CheckParameters__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0231B190, void, _AsyncProcessMessage_b__4_0, (app::StackBuilderSink * this_ptr, app::Object * data));
    IL2CPP_REGISTER_METHODINFO(0x0477EA50, StackBuilderSink__AsyncProcessMessage_b__4_0__MethodInfo);
}