#include "counter.h"
#include <string>
#include <iostream>


	Counter::Counter(std::string answer) {

		if (answer == "��") {
			std::cout << "������� ��������� �������� ��������: ";
			std::cin >> num;
		}
		else
			num = 1;
	};
	void Counter::plus() {
		++num;
	}
	void Counter::minus() {
		--num;
	}
	void Counter::equal() {
		std::cout << num << std::endl;
	}
	void Counter::set() {
		std::cin >> num;
	};