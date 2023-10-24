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
	mark = Ydar_copy.mark;
	engineVol = Ydar_copy.engineVol;
	color = Ydar_copy.color;
	typeKPP = Ydar_copy.typeKPP;
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
string Ydar::get_mark() const
{
	return mark;
}
void Ydar::set_mark(string mark_ch)
{
	mark = mark_ch;
}
string Ydar::get_engineVol() const
{
	return engineVol;
}
void Ydar::set_engineVol(string engineVol_ch)
{
	engineVol = engineVol_ch;
}
string Ydar::get_color() const
{
	return color;
}
void Ydar::set_color(string color_ch)
{
	color = color_ch;
}
string Ydar::get_typeKPP() const
{
	return typeKPP;
}
void Ydar::set_typeKPP(string course_ch)
{
	typeKPP = course_ch;
}
void Ydar::show()
{
	cout << "------------------------------------" << endl;
	cout << "����������: �������" << endl;
	cout << "���: " << stamp << endl;
	cout << "��������: " << mark << endl;
	cout << "���������: " << engineVol << endl;
	cout << "���������� ������ � ��������: " << color << endl;
	cout << "��� ���������: " << typeKPP << endl;
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
	getline(cin, mark);
	cout << "������� ���������: ";
	getline(cin, engineVol);
	cout << "������� ���������� ������ � ��������: ";
	getline(cin, color);
	cout << "������� ��� ���������: ";
	getline(cin, typeKPP);
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
	outfile << 3 << endl << stamp << endl << engineVol << endl << color << endl << typeKPP << endl << mark << endl;
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
		this->mark = red_str;
		break;
	case 3:
		this->engineVol = red_str; this->color = red_str;
		break;
	case 4:
		this->color = red_str;
		break;
	case 5:
		this->typeKPP = red_str;
		break;
	default:
		throw "������������ ���� ������!";
		break;
	}
}