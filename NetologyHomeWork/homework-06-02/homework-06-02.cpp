#include <iostream>
#include "counter.h"
#include <string>
#include <Windows.h>

int main(int argc, const char* argv[]) {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::string answer;
	std::cin >> answer;
	Counter count(answer);
	bool flag = true;
	char action;
	while (flag) {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> action;
		switch (action) {
		case '+':
			count.plus();
			break;
		case '-':
			count.minus();
			break;
		case '=':
			count.equal();
			break;
		case 'x':
			flag = false;
			break;
		default:
			break;
		}
	}
	std::cout << "До свидания!" << std::endl;
	return 0;
}