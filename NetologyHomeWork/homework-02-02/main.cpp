//
//  main.cpp
//  homework-02-02
//
//  Created by Илья Минин on 21.09.2022.
//

#include <iostream>

struct Account{
	uint ac_number;
	std::string ac_user_name;
	double ac_money;
};

void new_balance(Account &user){
	std::cout << "Введите новый баланс: ";
	std::cin >> user.ac_money;
}

int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "RUSSIAN");
	Account user;
	
	std::cout << "Введите номер счёта: ";
	std::cin >> user.ac_number;
	std::cout << "Введите имя владельца: ";
	std::cin >> user.ac_user_name;
	std::cout << "Введите баланс: ";
	std::cin >> user.ac_money;
	new_balance(user);
	std::cout << "Ваш счет: " << user.ac_user_name << ", " << user.ac_number << ", " << user.ac_money << std::endl;
	
	return 0;
}
