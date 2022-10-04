//
//  main.cpp
//  homework-03-01
//
//  Created by Илья Минин on 02.10.2022.
//

#include <iostream>

class Calculator
{
public:
	double num1;
	double num2;
	
	double add(double &num1, double &num2){
		return num1+num2;
	}
	double multiply(double &num1, double &num2){
		return num1*num2;
	}
	double subtract_1_2(double &num1, double &num2){
		return num1-num2;
	}
	double subtract_2_1(double &num1, double &num2){
		return num2-num1;
	}
	double divide_1_2(double &num1, double &num2){
		return num1/num2;
	}
	double divide_2_1(double &num1, double &num2){
		return num2/num1;
	}
	bool set_num1(double num1){
		if (num1 !=0){
			this -> num1 = num1;
			return true;
		}
		else
			return false;
	}
	
	bool set_num2(double num2){
		if (num2 !=0){
			this -> num2 = num2;
			return true;
		}
		else
			return false;
	}
};

int main(int argc, const char * argv[]) {

	Calculator calc;
	do{
		std::cout << "Введите num1: ";
		std::cin >> calc.num1;
		if (!calc.set_num1(calc.num1))
			std::cout << "Неверный ввод!" << std::endl;
	} while (!calc.set_num1(calc.num1));
	
	do{
		std::cout << "Введите num2: ";
		std::cin >> calc.num2;
		if (!calc.set_num2(calc.num2))
			std::cout << "Неверный ввод!" << std::endl;
	} while (!calc.set_num2(calc.num2));
	
	std::cout << "num1 + num2 = " << calc.add(calc.num1, calc.num2)<< std::endl;
	std::cout << "num1 - num2 = " << calc.subtract_1_2(calc.num1, calc.num2)<< std::endl;
	std::cout << "num2 - num1 = " << calc.subtract_2_1(calc.num1, calc.num2)<< std::endl;
	std::cout << "num1 * num2 = " << calc.multiply(calc.num1, calc.num2)<< std::endl;
	std::cout << "num1 / num2 = " << calc.divide_1_2(calc.num1, calc.num2)<< std::endl;
	std::cout << "num2 / num1 = " << calc.divide_2_1(calc.num1, calc.num2)<< std::endl;
	
}
