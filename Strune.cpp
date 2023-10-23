#include <iostream>
#include <fstream>
#include <string>
#include "Strune.h"
using namespace std;
Strune::Strune()
{
	cout << "Конструктор без параметров вызван" << endl;
}
Strune::~Strune()
{
	cout << "Деконструктор" << endl;
}
Strune::Strune(const Strune& Strune_copy)
{
	stamp = Strune_copy.stamp;
	mark = Strune_copy.mark;
	number_seats = Strune_copy.number_seats;
	number_passengers = Strune_copy.number_passengers;
	terminal_st = Strune_copy.terminal_st;
	cout << "Конструктор вызван." << endl;
}
Strune::Strune(string stamp)
{
	this->stamp = stamp;
	cout << "Конструктор вызван" << endl;
}
string Strune::get_stamp() const
{
	return stamp;
}
void Strune::set_stamp(string name_ch)
{
	stamp = name_ch;
}
string Strune::get_mark() const
{
	return mark;
}
void Strune::set_mark(string mark_ch)
{
	mark = mark_ch;
}
string Strune::get_number_seats() const
{
	return number_seats;
}
void Strune::set_number_seats(string number_seats_ch)
{
	number_seats = number_seats_ch;
}
string Strune::get_number_passengers() const
{
	return number_passengers;
}
void Strune::set_number_passengers(string number_passengers_ch)
{
	number_passengers = number_passengers_ch;
}
string Strune::get_terminal_st() const
{
	return terminal_st;
}
void Strune::set_terminal_st(string terminal_st_ch)
{
	terminal_st = terminal_st_ch;
}
void Strune::show()
{
	cout << "------------------------------------" << endl;
	cout << "Транспорт: Strune" << endl;
	cout << "Модель(Stamp): " << stamp << endl;
	cout << "Марка(Mark): " << mark << endl;
	cout << "Кол-во сидячих мест(Number_seats): " << number_seats << endl;
	cout << "Кол-во пассажиров(Number_passengers): " << number_passengers << endl;
	cout << "Конечная остановка(Terminal_st): " << terminal_st << endl;
	cout << "------------------------------------" << endl;
}
void Strune::rewrite()
{
	cout << "------------------------------------" << endl;
	cout << "Транспорт: Strune" << endl;
	cout << "Введите новую модель: ";
	getline(cin, stamp);
	getline(cin, stamp);
	cout << "Введите новую марку: ";
	getline(cin, mark);
	cout << "Введите кол-во сидячих мест: ";
	getline(cin, number_seats);
	cout << "Введите кол-во пассажиров: ";
	getline(cin, number_passengers);
	cout << "Введите конечную остановку: ";
	getline(cin, terminal_st);
	cout << "------------------------------------" << endl;
}
void Strune::saving()
{
	ofstream outfile;
	string initfile = "data.txt";
	outfile.open(initfile, ios_base::app);
	if (!outfile.is_open())
	{
		cout << "Ошбика открытия файла!" << endl;
		exit(1);
	}
	outfile << 3 << endl << stamp << endl << mark << endl << number_seats << endl << number_passengers << endl << terminal_st << endl;
	outfile.close();
}
void Strune::redact_str(int num_str, string red_str) {
	switch (num_str)
	{
	case 1:
		this->stamp = red_str;
		break;
	case 2:
		this->mark = red_str;
		break;
	case 3:
		this->number_seats = red_str;
		break;
	case 4:
		this->number_passengers = red_str;
		break;
	case 5:
		this->terminal_st = red_str;
		break;
	default:
		cout << "Неправильный ввод" << endl;
		break;
	}