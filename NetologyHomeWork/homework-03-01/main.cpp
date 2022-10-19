//
//  main.cpp
//  homework-03-01
//
//  Created by Илья Минин on 02.10.2022.
//

#include <iostream>

class Calculator
{
private:
	double num1;
	double num2;

public:
	
	double add(){
		return num1 + num2;
	}
	
	double multiply(){
		return num1*num2;
	}
	double subtract_1_2(){
		return num1-num2;
	}
	double subtract_2_1(){
		return num2-num1;
	}
	double divide_1_2(){
		return num1/num2;
	}
	double divide_2_1(){
		return num2/num1;
	}
	bool set_num1(double a){
		if (num1 !=0){
			num1 = a;
			return true;
		}
		else
			return false;
	}
	
	bool set_num2(double a){
		if (num2 !=0){
			num2 = a;
			return true;
		}
		else
			return false;
	}
};

int main(int argc, const char * argv[]) {

	Calculator calc;
	double a;
	do{
		std::cout << "Введите num1: ";
		std::cin >> a;
		if (!calc.set_num1(a))
			std::cout << "Неверный ввод!" << std::endl;
	} while (!calc.set_num1(a));
	
	do{
		std::cout << "Введите num2: ";
		std::cin >> a;
		if (!calc.set_num2(a))
			std::cout << "Неверный ввод!" << std::endl;
	} while (!calc.set_num2(a));
	
	std::cout << "num1 + num2 = " << calc.add()<< std::endl;
	std::cout << "num1 - num2 = " << calc.subtract_1_2()<< std::endl;
	std::cout << "num2 - num1 = " << calc.subtract_2_1()<< std::endl;
	std::cout << "num1 * num2 = " << calc.multiply()<< std::endl;
	std::cout << "num1 / num2 = " << calc.divide_1_2()<< std::endl;
	std::cout << "num2 / num1 = " << calc.divide_2_1()<< std::endl;
	
}
