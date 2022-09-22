//
//  main.cpp
//  homework-02-01
//
//  Created by Илья Минин on 20.09.2022.
//

#include <iostream>


enum class Months
{
	January=1, February, March, April, May, June, July, August, September, October, November, December
	
};

int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "RUSSIAN");
	int number = 0;
	do{
		std::cout << "Введите номер месяца: ";
		std::cin >> number;
		Months mounth = static_cast<Months>(number);
		switch (static_cast<int>(mounth)){
			case 1: std::cout << "Январь" <<std::endl; break;
			case 2: std::cout << "Февраль" <<std::endl; break;
			case 3: std::cout << "Март" <<std::endl; break;
			case 4: std::cout << "Апрель" <<std::endl; break;
			case 5: std::cout << "Май" <<std::endl; break;
			case 6: std::cout << "Июнь" <<std::endl; break;
			case 7: std::cout << "Июль" <<std::endl; break;
			case 8: std::cout << "Август" <<std::endl; break;
			case 9: std::cout << "Сентябрь" <<std::endl; break;
			case 10: std::cout << "Октябрь" <<std::endl; break;
			case 11: std::cout << "Ноябрь" <<std::endl; break;
			case 12: std::cout << "Декабрь" <<std::endl; break;
			case 0: std::cout << "До свидания" <<std::endl; break;
			default: std::cout << "Неправильный номер!" << std::endl; break;
		}
	} while(number != 0);
	
	return 0;
}
