#pragma once

#include <string>

#include <Il2CppModLoader/constants.h>
#include <Il2CppModLoader/macros.h>

namespace modloader
{
    using shutdown_handler = void(*)();
    extern IL2CPP_MODLOADER_DLLEXPORT std::string base_path;

    struct IL2CPP_MODLOADER_DLLEXPORT Initialization
    {
        using init = void (*)();
        Initialization(init p_call);

        init call;
        Initialization* next;
    };

    template<typename T>
    struct ScopedSetter
    {
        T& variable;
        T value;

        ScopedSetter(T& variable, T value)
            : variable(variable)
            , value(variable)
        {
            variable = value;
        }

        ~ScopedSetter()
        {
            variable = value;
        }
    };

    IL2CPP_MODLOADER_DLLEXPORT void trace(MessageType type, int level, std::string const& group, std::string const& message);
    IL2CPP_MODLOADER_DLLEXPORT void info(std::string const& group, std::string const& message);
    IL2CPP_MODLOADER_DLLEXPORT void warn(std::string const& group, std::string const& message);
    IL2CPP_MODLOADER_DLLEXPORT void debug(std::string const& group, std::string const& message);
    IL2CPP_MODLOADER_DLLEXPORT void send_trace(MessageType type, int level, std::string const& group, std::string const& message);

    IL2CPP_MODLOADER_DLLEXPORT void add_shutdown_handler(shutdown_handler handler);
    IL2CPP_MODLOADER_DLLEXPORT void shutdown();

    IL2CPP_MODLOADER_DLLEXPORT extern bool shutdown_thread;
}

#define CALL_ON_INIT(func) modloader::Initialization func##_init_struct(&func)
