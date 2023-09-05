#pragma once
#include "Quadrilateral.h"
#ifdef WORK4DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif


DLL_API class Parallelogram : public Quadrilateral {
public:
	Parallelogram() : Quadrilateral(10, 30, 10, 30, 50, 130, 50, 130) {

	}
protected:
	DLL_API void print_quad() override;
};