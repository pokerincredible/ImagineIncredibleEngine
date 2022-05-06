#pragma once

#ifdef II_PLATFORM_WINDOWS
	#ifdef II_BUILD_DLL
		#define II_API __declspec(dllexport)
	#else
		#define II_API __declspec(dllimport)
	#endif // II_BUILD_DLL
#else
	#error ImagineIncredible Only support windows!
#endif // II_PLATFORM_WINDOWS
