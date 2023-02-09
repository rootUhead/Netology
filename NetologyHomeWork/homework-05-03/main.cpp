#include <iostream>

class Figure {

public:

	Figure() {}

	virtual bool check() {

		if (sides_count == 0) {
			return 1;
		}
		else {
			return 0;
		}


	}

	void print() {


		std::cout << get_name() << ":" << std::endl;

		if (check()) {

			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}

		std::cout << "Колличество сторон: " << get_sides() << std::endl;

		if (get_sides() == 3) {

			std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
			std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
		}
		else if (get_sides() == 0) {

			std::cout << std::endl;
		}
		else {

			std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
			std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;

		}
	}


protected:

	int get_sides() {
		return sides_count;
	}

	std::string get_name() {
		return name;
	}

	int sides_count = 0;
	int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
	std::string name = "Фигура";


};


class Triangle : public Figure
{
public:

	Triangle(int a, int b, int c, int A, int B, int C) {

		sides_count = 3;
		this->a = a, this->b = b, this->c = c;
		this->A = A, this->B = B, this->C = C;
		name = "Треугольник";
	}

	bool check() override {
		if (sides_count == 3 && A + B + C == 180) {
			return 1;
		}
		else {
			return 0;
		}
	}

};


class Right_triangle : public Triangle
{
public:

	Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, C = 90) {

		name = "Прямоугольный треугольник";

	}

	bool check() override {
		if (C == 90) {
			return 1;
		}
		else {
			return 0;
		}
	}
};

class Isosceles_triangle : public Triangle
{
public:

	Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, c = a, A, B, C = A) {

		name = "Равнобедренный треугольник";
	}

	bool check() override {
		if (a == c && A == C) {
			return 1;
		}
		else {
			return 0;
		}
	}
};

class Equilateral_triangle : public Triangle
{
public:

	Equilateral_triangle(int a) : Triangle(a, b = a, c = a, A = 60, B = 60, C = 60) {

		name = "Равносторонний треугольник";
	}

	bool check() override {
		if (a == c && b == a && A == 60 && B == 60 && C == 60) {
			return 1;
		}
		else {
			return 0;
		}
	}

};

class Quadrilateral : public Figure
{
public:

	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {

		sides_count = 4;
		this->a = a, this->b = b, this->c = c, this->d = d;
		this->A = A, this->B = B, this->C = C, this->D = D;
		name = "Четырёхугольник";
	}

	bool check() override {
		if (sides_count == 4 && A + B + C + D == 360) {
			return 1;
		}
		else {
			return 0;
		}
	}

};

class _Rectangle : public Quadrilateral
{
public:

	_Rectangle(int a, int b) : Quadrilateral(a, b, c = a, d = b, A = 90, B = 90, C = 90, D = 90) {

		name = "Прямоугольник";
	}

	bool check() override {
		if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) {
			return 1;
		}
		else {
			return 0;
		}
	}

};

class Square : public Quadrilateral
{
public:

	Square(int a) : Quadrilateral(a, b = a, c = a, d = a, A = 90, B = 90, C = 90, D = 90) {

		name = "Квадрат";

	}

	bool check() override {
		if (a == c && b == d && a == b && A == 90 && B == 90 && C == 90 && D == 90) {
			return 1;
		}
		else {
			return 0;
		}
	}
};

class Parallelogram : public Quadrilateral
{
public:

	Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, c = a, d = b, A, B, C = A, D = B) {

		name = "Параллелограмм";
	}

	bool check() override {
		if (a == c && b == d && A == C && D == B) {
			return 1;
		}
		else {
			return 0;
		}
	}
};

class Rhomb : public Quadrilateral
{
public:

	Rhomb(int a, int A, int B) : Quadrilateral(a, b = a, c = a, d = a, A, B, C = A, D = B) {

		name = "Ромб";
	}

	bool check() override {
		if (a == c && b == d && a == b && A == C && D == B) {
			return 1;
		}
		else {
			return 0;
		}
	}

};


void print_info(Figure* figure) {
	figure->print();
}


int main()
{

	Figure fig;

	Triangle tri(10, 20, 30, 50, 60, 70);
	Right_triangle right_tri(10, 20, 30, 50, 60);
	Isosceles_triangle isosceles_tri(10, 20, 50, 60);
	Equilateral_triangle equilateral_tri(40);
	Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80);

	_Rectangle req(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

	print_info(&fig);

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
