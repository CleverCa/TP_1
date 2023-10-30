#include <iostream>
#include <fstream>
#include <string>
#include "Dyhovie.h"

using namespace std;

Dyhovie::Dyhovie()
{
	//cout << "����������� ��� ����������" << endl;
}

Dyhovie::~Dyhovie()
{
	//cout << "����������" << endl;
}

Dyhovie::Dyhovie(const Dyhovie& Dyhovie_copy)
{
	stamp = Dyhovie_copy.stamp;
	name_proz = Dyhovie_copy.name_proz;
	cost = Dyhovie_copy.cost;
	FIO = Dyhovie_copy.FIO;
	kolvo_instr = Dyhovie_copy.kolvo_instr;
	defect = Dyhovie_copy.defect;
	//cout << "����������� ����������� �������" << endl;
}

Dyhovie::Dyhovie(string stamp)
{
	this->stamp = stamp;
	//cout << "���������� Dyhovie � ����������" << endl;
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
	cout << "����������: �������" << endl;
	cout << "�������� �����������: " << stamp << endl;
	cout << "������������ ������������� �����������: " << name_proz << endl;
	cout << "��������� �����������: " << cost << endl;
	cout << "��� ���������: " << FIO << endl;
	cout << "���������� ������ � ��������: " << kolvo_instr << endl;
	cout << "����� ���� ������� ������������ � �����������: " << defect << endl;
	cout << "------------------------------------" << endl;
}
void Dyhovie::rewrite()
{
	cout << "------------------------------------" << endl;
	cout << "�������: " << endl;
	cout << "������� ��������: ";
	getline(cin, stamp);
	getline(cin, stamp);
	cout << "������� ������������ �������������: ";
	getline(cin, name_proz);
	cout << "������� ��������� �����������: ";
	getline(cin, cost);
	cout << "������� ��� ���������: ";
	getline(cin, FIO);
	cout << "������� ���������� ������ � ��������: ";
	getline(cin, kolvo_instr);
	cout << "������� �������, ������� ������������ � �����������: ";
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
		cout << "������ �������� �����!" << endl;
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
		cout << "������������ ����" << endl;
		break;
	}
}