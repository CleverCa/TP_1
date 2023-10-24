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

Strune::Strune(const Strune& Strune_copy) //Конструктор с копированием
{
	stamp = Strune_copy.stamp;
	FIO = Strune_copy.FIO;
	name_proz = Strune_copy.name_proz;
	cost_instr = Strune_copy.cost_instr;
	kolvo_instr = Strune_copy.kolvo_instr;
	text = Strune_copy.text;

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
	stamp = name_ch; //Задаем
}

string Strune::get_FIO() const
{
	return FIO;
}

void Strune::set_FIO(string FIO_ch)
{
	FIO = FIO_ch;
}

string Strune::get_name_proz() const
{
	return name_proz;
}

void Strune::set_name_proz(string name_proz_ch)
{
	name_proz = name_proz_ch;
}

string Strune::get_cost_instr() const
{
	return cost_instr;
}

void Strune::set_cost_instr(string cost_instr_ch)
{
	cost_instr = cost_instr_ch;
}

string Strune::get_kolvo_instr() const
{
	return kolvo_instr;
}

void Strune::set_kolvo_instr(string kolvo_instr_ch)
{
	kolvo_instr = kolvo_instr_ch;
}

string Strune::get_text() const
{
	return text;
}

void Strune::set_text(string text)
{
	text = text;
}

void Strune::show()
{
	cout << "------------------------------------" << endl;
	cout << "Инструмент: Струнные" << endl;
	cout << "Название: " << stamp << endl;
	cout << "ФИО владельца: " << FIO << endl;
	cout << "Наименование производителя инструмента: " << name_proz << endl;
	cout << "Стоимость инструмента: " << cost_instr << endl;
	cout << "Количество единиц в оркестре: " << kolvo_instr << endl;
	cout << "Краткое текстовое описание инструмента: " << text << endl;
	cout << "------------------------------------" << endl;
}

void Strune::rewrite()
{
	cout << "------------------------------------" << endl;
	cout << "Инструмент: Струнные" << endl;
	cout << "Введите название: ";
	getline(cin, stamp);
	getline(cin, stamp);
	cout << "Введите ФИО владельца: ";
	getline(cin, FIO);
	cout << "Введите наименование производителя инструмента: ";
	getline(cin, name_proz);
	cout << "Введите стоимость инструмента: ";
	getline(cin, cost_instr);
	cout << "Введите количество единиц в оркестре: ";
	getline(cin, kolvo_instr);
	cout << "Введите краткое описание инструмента: ";
	getline(cin, text);
	cout << "------------------------------------" << endl;
}

void Strune::saving()
{
	ofstream outfile;
	string initfile = "data.txt";
	outfile.open(initfile, ios_base::app);
	if (!outfile.is_open())
	{
		cout << "Error!" << endl;
		exit(1);
	}
	outfile << 2 << endl << stamp << endl << FIO << endl << name_proz << endl << cost_instr << endl << kolvo_instr << endl << text << endl;
	outfile.close();
}

void Strune::redact_str(int num_str, string red_str)
{
	switch (num_str)
	{
	case 1:
		this->stamp = red_str;
		break;
	case 2:
		this->FIO = red_str;
		break;
	case 3:
		this->name_proz = red_str;
		break;
	case 4:
		this->cost_instr = red_str;
		break;
	case 5:
		this->kolvo_instr = red_str;
		break;
	case 6:
		this->text = red_str; //this - показывать конкретное на что мы заменяем
		break;
	default:
		cout << "Неправильный ввод" << endl;
		break;
	}
}