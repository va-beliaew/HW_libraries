#include <iostream>
#include "../Work4/Triangle.h"
#include "../Work4/Equilateral.h"
#include "../Work4/Isosceles.h"
#include "../Work4/Right.h"
#include "../Work4/Quadrilateral.h"
#include "../Work4/Rectangle.h"
#include "../Work4/Rhomb.h"
#include "../Work4/Square.h"
#include "../Work4/Parallelogram.h"




void triangle_show(Triangle* tr) {
	tr->print_triangle();
}
void quad_show(Quadrilateral& quad) {
	quad.print_quad();
}


int main() {
	setlocale(LC_ALL, "rus");
	Right tr_r;
	Equilateral tr_e;
	Isosceles tr_i;
	Rectangle rec;
	Rhomb rh;
	Square sq;
	Parallelogram par;
	triangle_show(&tr_r);
	triangle_show(&tr_e);
	triangle_show(&tr_i);
	quad_show(rh);
	quad_show(rec);
	quad_show(sq);
	quad_show(par);
	system("pause");

	return 0;
}