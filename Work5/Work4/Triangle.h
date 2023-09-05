#pragma once
#ifdef WORK4DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else 
#define DLL_API __declspec(dllimport)
#endif

DLL_API class Triangle {
	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;
protected:
	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
public:
	DLL_API virtual void print_triangle();
protected:
	DLL_API void print_triangle_param();
};