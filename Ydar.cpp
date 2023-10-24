#include <iostream>
#include <locale>
#include <Windows.h>
#include <fstream>
#include <string>
#include "Ydar.h"

using namespace std;

Ydar::Ydar()
{
	cout << "����������� ��� ����������" << endl;
}

Ydar::~Ydar()
{
	cout << "����������" << endl;
}

Ydar::Ydar(const Ydar& Ydar_copy)
{
	stamp = Ydar_copy.stamp;
	nazvanie = Ydar_copy.nazvanie;
	cost = Ydar_copy.cost;
	kolvo_instr = Ydar_copy.kolvo_instr;
	FIO = Ydar_copy.FIO;
	cout << "����������� Ydar ��� ������ �������" << endl;
}

Ydar::Ydar(string stamp)
{
	this->stamp = stamp;
	cout << "���������� Ydar � ����������" << endl;
}

string Ydar::get_stamp() const
{
	return stamp;
}

void Ydar::set_stamp(string stamp_ch)
{
	stamp = stamp_ch;
}

string Ydar::get_nazvanie() const
{
	return nazvanie;
}

void Ydar::set_nazvanie(string nazvanie_ch)
{
	nazvanie = nazvanie_ch;
}

string Ydar::get_cost() const
{
	return cost;
}

void Ydar::set_cost(string cost_ch)
{
	cost = cost_ch;
}

string Ydar::get_kolvo_instr() const
{
	return kolvo_instr;
}

void Ydar::set_kolvo_instr(string kolvo_instr_ch)
{
	kolvo_instr = kolvo_instr_ch;
}

string Ydar::get_FIO() const
{
	return FIO;
}

void Ydar::set_FIO(string FIO_ch)
{
	FIO = FIO_ch;
}

void Ydar::show()
{
	cout << "------------------------------------" << endl;
	cout << "����������: �������" << endl;
	cout << "���: " << stamp << endl;
	cout << "��������: " << nazvanie << endl;
	cout << "���������: " << cost << endl;
	cout << "���������� ������ � ��������: " << kolvo_instr << endl;
	cout << "��� ���������: " << FIO << endl;
	cout << "------------------------------------" << endl;
}

void Ydar::rewrite()
{
	cout << "------------------------------------" << endl;
	cout << "����������: �������" << endl;
	cout << "������� ���: ";
	getline(cin, stamp);
	getline(cin, stamp);
	cout << "������� ��������: ";
	getline(cin, nazvanie);
	cout << "������� ���������: ";
	getline(cin, cost);
	cout << "������� ���������� ������ � ��������: ";
	getline(cin, kolvo_instr);
	cout << "������� ��� ���������: ";
	getline(cin, FIO);
	cout << "------------------------------------" << endl;
}

void Ydar::saving()
{
	ofstream outfile;
	string initfile = "data.txt";
	outfile.open(initfile, ios_base::app);
	if (!outfile.is_open())
	{
		cout << "������ ��������!" << endl;
		exit(1);
	}
	outfile << 3 << endl << stamp << endl << nazvanie << endl << cost << endl << kolvo_instr << endl << FIO << endl;
	outfile.close();
}

void Ydar::redact_str(int num_str, string red_str)
{
	switch (num_str)
	{
	case 1:
		this->stamp = red_str;
		break;

	case 2:
		this->nazvanie = red_str;
		break;

	case 3:
		this->cost = red_str; 
		break;

	case 4:
		this->kolvo_instr = red_str;
		break;

	case 5:
		this->FIO = red_str;
		break;

	default:
		throw "������������ ���� ������!";
		break;
	}
}