//
//  main.cpp
//  homework-02-03
//
//  Created by Илья Минин on 22.09.2022.
//

#include <iostream>


struct Address
{
	std::string ad_сountry = "NaN";
	std::string ad_city = "NaN";
	std::string ad_street = "NaN";
	uint ad_building = 0;
	uint ad_flat = 0;
	uint32_t ad_zip = 0;
};

void address_print (Address &home){
	std::cout << "Страна: " << home.ad_сountry << std::endl;
	std::cout << "Город: " << home.ad_city << std::endl;
	std::cout << "Улица: " << home.ad_street << std::endl;
	std::cout << "Номер дома: " << home.ad_building << std::endl;
	std::cout << "Номер квартиры: " << home.ad_flat << std::endl;
	std::cout << "Индекс: " << home.ad_zip << std::endl;
	std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
	
	setlocale(LC_ALL, "RUSSIAN");
	
	Address my, new_my;
	my.ad_сountry = "Россия";
	my.ad_city	= "Москва";
	my.ad_street = "Арбат";
	my.ad_building = 5;
	my.ad_flat = 2;
	my.ad_zip = 148797;
	
	new_my.ad_сountry = "Россия";
	new_my.ad_city	= "Санкт-Питербург";
	new_my.ad_street = "Садовая";
	new_my.ad_building = 5;
	new_my.ad_flat = 2;
	new_my.ad_zip = 187012;
	
	address_print(my);
	address_print(new_my);
	
	return 0;
}
