#pragma once
#include "Triangle.h"
#ifdef WORK4DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif


DLL_API class Equilateral : public Triangle {
public:
	Equilateral() : Triangle(30, 30, 30, 60, 60, 60) {
	}
protected:
	DLL_API void print_triangle() override;
};