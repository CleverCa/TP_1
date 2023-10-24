#include <iostream>
#include <fstream>
#include <string>
#include "Dyhovie.h"
using namespace std;
Dyhovie::Dyhovie()
{
	cout << "����������� ��� ����������" << endl;
}
Dyhovie::~Dyhovie()
{
	cout << "����������" << endl;
}
Dyhovie::Dyhovie(const Dyhovie& Dyhovie_copy)
{
	stamp = Dyhovie_copy.stamp;
	mark = Dyhovie_copy.mark;
	engineVol = Dyhovie_copy.engineVol;
	enginePower = Dyhovie_copy.enginePower;
	locale = Dyhovie_copy.locale;
	defect = Dyhovie_copy.defect;
	cout << "����������� ����������� �������" << endl;
}
Dyhovie::Dyhovie(string stamp)
{
	this->stamp = stamp;
	cout << "���������� Dyhovie � ����������" << endl;
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
	cout << "����������: �������" << endl;
	cout << "�������� �����������: " << stamp << endl;
	cout << "������������ ������������� �����������: " << mark << endl;
	cout << "��������� �����������: " << engineVol << endl;
	cout << "��� ���������: " << enginePower << endl;
	cout << "���������� ������ � ��������: " << locale << endl;
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
	getline(cin, mark);
	cout << "������� ��������� �����������: ";
	getline(cin, engineVol);
	cout << "������� ��� ���������: ";
	getline(cin, enginePower);
	cout << "������� ���������� ������ � ��������: ";
	getline(cin, locale);
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
		cout << "������������ ����" << endl;
		break;
	}
}