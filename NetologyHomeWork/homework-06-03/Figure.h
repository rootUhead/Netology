#pragma once
#include <iostream>


class Figure {

public:

	void print();

protected:

	int get_sides();

	std::string get_name();

	int sides_count = 0;
	int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
	std::string name = "Фигура";

};