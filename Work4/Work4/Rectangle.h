#pragma once
#include "Quadrilateral.h"
#ifdef WORK4DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif

DLL_API class Rectangle : public Quadrilateral {
public:
	Rectangle() : Quadrilateral(20, 40, 20, 40, 90, 90, 90, 90) {

	}
protected:
DLL_API	void print_quad() override;
};