#pragma once
#include "Quadrilateral.h"
#ifdef WORK4DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif

DLL_API class Square : public Quadrilateral {
public:
	Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90) {

	}
protected:
	DLL_API void print_quad() override;
};