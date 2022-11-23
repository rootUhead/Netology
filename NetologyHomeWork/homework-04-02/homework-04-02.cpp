// homework-04-02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <fstream>


class Adress {

private:
	std::string City;
	std::string Street;
	unsigned int Building;
	int Flat;

public:

	void set_city(std::string city) {
		City = city;
	}
	void set_street(std::string street) {
		Street = street;
	}
	void set_building(unsigned int building) {
		Building = building;
	}
	void set_flat(int flat) {
		Flat = flat;
	}
	std::string get_output_address() {
		return City + ", " + Street + ", " + std::to_string(Building) + ", " + std::to_string(Flat) + "\n";
	}

};

void sort(Adress* adress, int size) {
	bool sort = true;
	while (sort) {
		sort = false;
		for (int i = 0; i < size - 1; ++i) {
			if (adress[i].get_output_address()[0] > adress[i + 1].get_output_address()[0]) {
				Adress temp = adress[i];
				adress[i] = adress[i + 1];
				adress[i + 1] = temp;
				sort = true;
			}
		}
	}

}

int main(int argc, const char* argv[]) {

	std::ifstream in_data("in.txt");
	if (in_data.is_open()) {
		int size;
		std::string city;
		std::string street;
		unsigned int building;
		int flat;
		in_data >> size;
		Adress* adresses = new Adress[size];
		while (!in_data.eof()) {
			for (int i = 0; i < size; ++i) {
				in_data >> city;
				adresses[i].set_city(city);
				in_data >> street;
				adresses[i].set_street(street);
				in_data >> building;
				adresses[i].set_building(building);
				in_data >> flat;
				adresses[i].set_flat(flat);
			}
		}
		in_data.close();
		std::cout << "Значение: " << adresses[1].get_output_address()[1] << std::endl;
		sort(adresses, size);
		std::ofstream out_data("out.txt");
		out_data << size << std::endl;
		for (int i = 0; i < size; ++i) {
			out_data << adresses[i].get_output_address();
		}
		delete[] adresses;
	}
	else {
		std::cout << "File does not exist!" << std::endl;

	}

	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
