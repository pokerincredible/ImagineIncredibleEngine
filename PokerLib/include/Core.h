#pragma once

#ifndef PE_PLATFORM_WINDOWS
#   define PE_API
#else
#   ifdef PE_EXPORT
#       define PE_API __declspec(dllexport)
#   else
#       define PE_API __declspec(dllimport)
#   endif
#endif

#define BIT(x) (1 << x)
