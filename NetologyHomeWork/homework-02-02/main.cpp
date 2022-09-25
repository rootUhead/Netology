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

void new_balance(Account &user, double &new_money){
	user.ac_money = new_money;
}

int main(int argc, const char * argv[]) {

	Account user;
	
	std::cout << "Введите номер счёта: ";
	std::cin >> user.ac_number;
	std::cout << "Введите имя владельца: ";
	std::cin >> user.ac_user_name;
	std::cout << "Введите баланс: ";
	std::cin >> user.ac_money;
	double new_money=0;
	std::cout << "Введите новый баланс: ";
	std::cin >> new_money;
	new_balance(user, new_money);
	std::cout << "Ваш счет: " << user.ac_user_name << ", " << user.ac_number << ", " << user.ac_money << std::endl;
	
	return 0;
}
