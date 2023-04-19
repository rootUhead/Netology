#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrilateral.h"
#include "_Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"


void print_info(Figure* figure) {
	figure->print();
}


int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle tri(10, 20, 30, 50, 60, 70);
	Right_triangle right_tri(10, 20, 30, 50, 60);
	Isosceles_triangle isosceles_tri(10, 20, 50, 60);
	Equilateral_triangle equilateral_tri(40);
	Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80);

	_Rectangle req(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

	print_info(&tri);
	print_info(&right_tri);
	print_info(&isosceles_tri);
	print_info(&equilateral_tri);

	print_info(&quad);
	print_info(&req);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rhomb);


	return 0;

}