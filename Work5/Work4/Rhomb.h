#pragma once
#include "Quadrilateral.h"
#ifdef WORK4DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif

DLL_API class Rhomb : public Quadrilateral {
public:
	Rhomb() : Quadrilateral(30, 30, 30, 30, 120, 60, 120, 60) {

	}
protected:
	DLL_API	void print_quad() override;
};