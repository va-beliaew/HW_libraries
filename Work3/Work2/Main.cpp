#include <iostream>
#include "../Work2DLL/dinamic_lib.h"
#include <Windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	string name;
	cout << "¬ведите им€: ";
	cin >> name;
	Leaver man (name);
	cout << man.leave();
	system("pause");
	return 0;
}