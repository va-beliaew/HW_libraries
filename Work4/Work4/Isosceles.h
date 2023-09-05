#pragma once
#include "Triangle.h"
#ifdef WORK4DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif

DLL_API class Isosceles : public Triangle {
public:
	Isosceles() : Triangle(20, 30, 20, 40, 100, 40) {
	}
protected:
	DLL_API void print_triangle() override;
};