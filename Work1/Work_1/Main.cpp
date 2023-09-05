#include <iostream>
#include "static_library.h"
#include <windows.h>



int main() {
	setlocale (LC_ALL, "rus");
	SetConsoleCP(1251);
	std::string Name;
	std::cout << "¬ведите им€: ";
	std::cin >> Name;
	Greeter man (Name);
	std::cout << man.greet();
	system("pause");
	return 0;
}