#include <iostream>
#include <fstream>
#include <string>
#include "Dyhovie.h"
using namespace std;
Dyhovie::Dyhovie()
{
	cout << "Конструктор без аттрибутов" << endl;
}
Dyhovie::~Dyhovie()
{
	cout << "Деструктор" << endl;
}
Dyhovie::Dyhovie(const Dyhovie& Dyhovie_copy)
{
	stamp = Dyhovie_copy.stamp;
	mark = Dyhovie_copy.mark;
	engineVol = Dyhovie_copy.engineVol;
	enginePower = Dyhovie_copy.enginePower;
	locale = Dyhovie_copy.locale;
	cout << "Конструктор осуществлен успешно" << endl;
}
Dyhovie::Dyhovie(string stamp)
{
	this->stamp = stamp;
	cout << "Конструтор Dyhovie с атрибутами" << endl;
}
string Dyhovie::get_stamp() const
{
	return stamp;
}
void Dyhovie::set_stamp(string stamp_ch)
{
	stamp = stamp_ch;
}
string Dyhovie::get_mark() const
{
	return mark;
}
void Dyhovie::set_mark(string mark_ch)
{
	mark = mark_ch;
}
string Dyhovie::get_engineVol() const
{
	return engineVol;
}
void Dyhovie::set_engineVol(string engineVol_ch)
{
	engineVol = engineVol_ch;
}
string Dyhovie::get_enginePower() const
{
	return enginePower;
}
void Dyhovie::set_enginePower(string enginePower_ch)
{
	enginePower = enginePower_ch;
}
string Dyhovie::get_locale() const
{
	return locale;
}
void Dyhovie::set_locale(string locale_ch)
{
	locale = locale_ch;
}
void Dyhovie::show()
{
	cout << "------------------------------------" << endl;
	cout << "Транспорт: Dyhovie" << endl;
	cout << "Модель(Stamp): " << stamp << endl;
	cout << "Марка(Mark): " << mark << endl;
	cout << "Объем двигателя(EngineVol): " << engineVol << endl;
	cout << "Мощность двигателя(EnginePower): " << enginePower << endl;
	cout << "Местность(Locale): " << locale << endl;
	cout << "------------------------------------" << endl;
}
void Dyhovie::rewrite()
{
	cout << "------------------------------------" << endl;
	cout << "Dyhovie: " << endl;
	cout << "Введите модель: ";
	getline(cin, stamp);
	getline(cin, stamp);
	cout << "Введите марку: ";
	getline(cin, mark);
	cout << "Введите объем двигателя: ";
	getline(cin, engineVol);
	cout << "Введите мощность двигателя: ";
	getline(cin, enginePower);
	cout << "Введите местность, по которой мотоцик предназначен: ";
	getline(cin, locale);
	cout << "------------------------------------" << endl;
}
void Dyhovie::saving()
{
	ofstream outfile;
	string initfile = "data.txt";
	outfile.open(initfile, ios_base::app);
	if (!outfile.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
		exit(1);
	}
	else
	{
		outfile << 2 << endl << stamp << endl << mark << endl << engineVol << endl << enginePower << endl << locale << endl;
		outfile.close();
	}
}
void Dyhovie::redact_str(int num_str, string red_str)
{
	switch (num_str)
	{
	case 1:
		this->stamp = red_str;
		break;
	case 2:
		this->mark = red_str;
		break;
	case 3:
		this->engineVol = red_str;
		break;
	case 4:
		this->enginePower = red_str;
		break;
	case 5:
		this->locale = red_str;
		break;
	default:
		cout << "Неправильный ввод" << endl;
		break;
	}
}