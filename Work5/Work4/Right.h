#pragma once
#include "Triangle.h"
#ifdef WORK4DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif

DLL_API class Right : public Triangle {
public:
	Right() : Triangle(10, 20, 22, 20, 70, 90) {
	}
protected:
	DLL_API void print_triangle() override;
		
};