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
	defect = Dyhovie_copy.defect;
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
string Dyhovie::get_defect() const
{
	return defect;
}
void Dyhovie::set_defect(string defect_ch)
{
	defect = defect_ch;
}
void Dyhovie::show()
{
	cout << "------------------------------------" << endl;
	cout << "Инструмент: Духовые" << endl;
	cout << "Название инструмента: " << stamp << endl;
	cout << "Наименование производителя инструмента: " << mark << endl;
	cout << "Стоимость инструмента: " << engineVol << endl;
	cout << "ФИО владельца: " << enginePower << endl;
	cout << "Количество единиц в оркестре: " << locale << endl;
	cout << "Какие есть дефекты присутствуют в инструменте: " << defect << endl;
	cout << "------------------------------------" << endl;
}
void Dyhovie::rewrite()
{
	cout << "------------------------------------" << endl;
	cout << "Духовые: " << endl;
	cout << "Введите название: ";
	getline(cin, stamp);
	getline(cin, stamp);
	cout << "Введите наименование производителя: ";
	getline(cin, mark);
	cout << "Введите стоимость инструмента: ";
	getline(cin, engineVol);
	cout << "Введите ФИО владельца: ";
	getline(cin, enginePower);
	cout << "Введите количество единиц в оркестре: ";
	getline(cin, locale);
	cout << "Введите дефекты, которые присутствуют в инструменте: ";
	getline(cin, defect);
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
		outfile << 1 << endl << stamp << endl << mark << endl << engineVol << endl << enginePower << endl << locale << endl << defect << endl;
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
	case 6:
		this->defect = red_str;
		break;
	default:
		cout << "Неправильный ввод" << endl;
		break;
	}
}