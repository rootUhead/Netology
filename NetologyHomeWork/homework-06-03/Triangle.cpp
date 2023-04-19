#include <iostream>
#include "Figure.h"
#include "Triangle.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C) {

	sides_count = 3;
	this->a = a, this->b = b, this->c = c;
	this->A = A, this->B = B, this->C = C;
	name = "Треугольник";
}