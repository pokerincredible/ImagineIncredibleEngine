#pragma once

#ifdef FE_PLATFORM_WINDOWS
	#ifdef FE_BUILD_DLL
		#define FE_API __declspec(dllexport)
	#else
		#define FE_API __declspec(dllimport)
	#endif // FE_BUILD_DLL
#else
	#error FancyEngine Only support windows!
#endif // FE_PLATFORM_WINDOWS
