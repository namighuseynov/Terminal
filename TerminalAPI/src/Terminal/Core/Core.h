#pragma once

#ifdef _WIN32

	#ifdef _WIN64
		#define TERMINAL_PLATFORM_WINDOWS
	#else 
		#error "Terminal support only x64 architecture"
	#endif 

#elif defined(__APPLE__) || defined(__MACH__)
	#include <TargetConditionals.h>
	#if TARGET_IPHONE_SIMULATOR == 1
		#error "IOS simulator is not supported!"
	#elif TARGET_OS_IPHONE == 1
		#define TERMINAL_PLATFORM_IOS
		#error "IOS is not supported!"
	#elif TARGET_OS_MAC == 1
		#define TERMINAL_PLATFORM_MACOS
		#error "MacOS is not supported!"
	#else
		#error "Unknown Apple platform!"
	#endif
#elif defined(__ANDROID__)
	#define HZ_PLATFORM_ANDROID
	#error "Android is not supported!"
#elif defined(__linux__)
	#define HZ_PLATFORM_LINUX
	#error "Linux is not supported!"
#else


#endif


