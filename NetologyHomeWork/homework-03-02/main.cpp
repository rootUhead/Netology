//
//  main.cpp
//  homework-03-02
//
//  Created by Илья Минин on 04.10.2022.
//

#include <iostream>

class Counter{

private:
	int num;
public:
	Counter(std::string answer){
		if (answer == "да"){
			std::cout << "Введите начальное значение счётчика: ";
			std::cin >> num;
		}
		else
			num=1;
	};
	void plus (){
		++num;
	}
	void minus(){
		--num;
	}
	void equal(){
		std::cout << num << std::endl;
	}
	void set(){
		std::cin >> num;
	}
};

int main(int argc, const char * argv[]) {
	
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::string answer;
	std::cin >> answer;
	Counter count(answer);
	bool flag=true;
	char action;
	while (flag){
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
				flag=false;
				break;
			default:
				break;
		}
	}
	std::cout << "До свидания!" << std::endl;
	return 0;
}
