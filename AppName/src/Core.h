#pragma once
#define APP_NAME "AppName"

#ifdef DEBUG
    #define ENABLE_ASSERTS
#endif

#ifdef ENABLE_ASSERTS
	#define ASSERT(x, ...) { if(!(x)) { ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define ASSERT(x, ...)
#endif