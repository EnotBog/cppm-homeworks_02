#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>

struct addres
{
	std::string country; std::string city; std::string street; int House_namber; int Apartament_number; int index;
};

void Print_addres(const addres& Addres_array)
{
	std::cout << std::endl
		<< "Город: " << Addres_array.city << std::endl
		<< "Улица: " << Addres_array.street << std::endl
		<< "Номер дома: " << Addres_array.House_namber << std::endl
		<< "Номер квартиры: " << Addres_array.Apartament_number << std::endl
		<< "Индекс:" << Addres_array.index << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	addres Addres_p1 = { "Россия", "Москва", "Арбат",12, 8, 123456 };

	addres Addres_p2 = { "Россия", "Ижевск", "Пушкина", 59, 143, 953769 };

	Print_addres(Addres_p1);
	Print_addres(Addres_p2);


}
