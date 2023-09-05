#pragma once
#include <iostream>

#define WIN32_LEAN_AND_MEAN   


class Greeter {
	std::string Name;
public:
	Greeter(std::string name_) {
		Name = name_;
	}
	std::string greet();
};