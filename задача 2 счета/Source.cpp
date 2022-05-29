#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>


struct Bank_score
{
	int Position_score; int Number_score; std::string First_name; double Credit_score;
};

void Creat_Bank_score(Bank_score & Bank_score_p1, int &number) //функция создание счета
{

	Bank_score_p1.Position_score = number;
	Bank_score_p1.Number_score = 0;
	Bank_score_p1.First_name = "q";
	Bank_score_p1.Credit_score = 0;
}


void Filling_score(int &number, Bank_score &Bank_score_p1) //функция заполнения счета
{
	int p2; std::string p3; double p4;

	std::cout << "Введите номер счёта:" << std::endl; std::cin >> p2;
	std::cout << "Введите имя владельца:" << std::endl; std::cin >> p3;
	std::cout << "Введите баланс:" << std::endl; std::cin >> p4;

	 Bank_score_p1 = {number,p2,p3,p4};
	number++;
}

void 	Edit_credit_score(Bank_score &Bank_score_p1, int y)
{
	double x; 
	std::cout << "Введите новый баланс:" << std::endl; std::cin >> x;
	Bank_score_p1.Credit_score = x;
}

int main() 

{
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	system("chcp 1251");

	int number = 1; // порядковый номер для создания 

//	Bank_score* Bank_score_array = new Bank_score[20];
	Bank_score p1;
	Creat_Bank_score(p1,number);

	Filling_score(number, p1);

	Edit_credit_score(p1, 1);// 1 номер счета для изменения

	
	std::cout <<"Ваш счёт:"<< " " << p1.First_name << " " << p1.Number_score << " " << p1.Credit_score << std::endl;

	//delete[] Bank_score_array;

}