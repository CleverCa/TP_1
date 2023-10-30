#include <iostream>
#include <fstream>
#include <string>
#include "Dyhovie.h"

using namespace std;

Dyhovie::Dyhovie()
{
	//cout << "Конструктор без аттрибутов" << endl;
}

Dyhovie::~Dyhovie()
{
	//cout << "Деструктор" << endl;
}

Dyhovie::Dyhovie(const Dyhovie& Dyhovie_copy)
{
	stamp = Dyhovie_copy.stamp;
	name_proz = Dyhovie_copy.name_proz;
	cost = Dyhovie_copy.cost;
	FIO = Dyhovie_copy.FIO;
	kolvo_instr = Dyhovie_copy.kolvo_instr;
	defect = Dyhovie_copy.defect;
	//cout << "Конструктор осуществлен успешно" << endl;
}

Dyhovie::Dyhovie(string stamp)
{
	this->stamp = stamp;
	//cout << "Конструтор Dyhovie с атрибутами" << endl;
}

string Dyhovie::get_stamp() const
{
	return stamp;
}
void Dyhovie::set_stamp(string stamp_ch)
{
	stamp = stamp_ch;
}
string Dyhovie::get_name_proz() const
{
	return name_proz;
}
void Dyhovie::set_name_proz(string name_proz_ch)
{
	name_proz = name_proz_ch;
}
string Dyhovie::get_cost() const
{
	return cost;
}
void Dyhovie::set_cost(string engineVol_ch)
{
	cost = engineVol_ch;
}
string Dyhovie::get_FIO() const
{
	return FIO;
}
void Dyhovie::set_FIO(string enginePower_ch)
{
	FIO = enginePower_ch;
}
string Dyhovie::get_kolvo_instr() const
{
	return kolvo_instr;
}
void Dyhovie::set_kolvo_instr(string kolvo_instr_ch)
{
	kolvo_instr = kolvo_instr_ch;
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
	cout << "Наименование производителя инструмента: " << name_proz << endl;
	cout << "Стоимость инструмента: " << cost << endl;
	cout << "ФИО владельца: " << FIO << endl;
	cout << "Количество единиц в оркестре: " << kolvo_instr << endl;
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
	getline(cin, name_proz);
	cout << "Введите стоимость инструмента: ";
	getline(cin, cost);
	cout << "Введите ФИО владельца: ";
	getline(cin, FIO);
	cout << "Введите количество единиц в оркестре: ";
	getline(cin, kolvo_instr);
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
		outfile << 1 << endl << stamp << endl << name_proz << endl << cost << endl << FIO << endl << kolvo_instr << endl << defect << endl;
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
		this->name_proz = red_str;
		break;
	case 3:
		this->cost = red_str;
		break;
	case 4:
		this->FIO = red_str;
		break;
	case 5:
		this->kolvo_instr = red_str;
		break;
	case 6:
		this->defect = red_str;
		break;
	default:
		cout << "Неправильный ввод" << endl;
		break;
	}
}