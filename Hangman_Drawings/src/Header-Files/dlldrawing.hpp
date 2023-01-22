#pragma once

#include <vector>

#ifdef DLLDRAWING_EXPORTS
#define DLLDRAWING_API __declspec(dllexport)
#else
#define DLLDRAWING_API __declspec(dllimport)
#endif

extern "C" DLLDRAWING_API void intro(int& return_value);
extern "C" DLLDRAWING_API void update(int& return_value, int fails);