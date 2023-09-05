#pragma once
#include <iostream>

#ifdef WORK2DLL_EXPORTS
#define DLL_API __declspec (dllexport)
#else 
#define DLL_API __declspec (dllimport)
#endif

DLL_API
class Leaver {
	std::string name;
public:
	Leaver (std::string name_) {
		name = name_;
	}
	DLL_API std::string leave();
};