#include "counter.h"
#include <string>
#include <iostream>


	Counter::Counter(std::string answer) {

		if (answer == "да") {
			std::cout << "¬ведите начальное значение счЄтчика: ";
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