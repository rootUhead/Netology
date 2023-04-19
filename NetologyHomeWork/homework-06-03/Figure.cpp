#include "Figure.h"
#include <iostream>

void Figure::print() {

	std::cout << get_name() << ":" << std::endl;

	if (get_sides() == 3) {

		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
	}
	else {

		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;

	}

}

int Figure::get_sides() { return sides_count; }

std::string Figure::get_name() { return name; }
