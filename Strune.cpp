#include <iostream>
#include <fstream>
#include <string>
#include "Strune.h"

using namespace std;

Strune::Strune()
{
	cout << "����������� ��� ���������� ������" << endl;
}

Strune::~Strune()
{
	cout << "�������������" << endl;
}

Strune::Strune(const Strune& Strune_copy)
{
	stamp = Strune_copy.stamp;
	mark = Strune_copy.mark;
	number_seats = Strune_copy.number_seats;
	number_passengers = Strune_copy.number_passengers;
	terminal_st = Strune_copy.terminal_st;
	text = Strune_copy.text;
	cout << "����������� ������." << endl;
}

Strune::Strune(string stamp)
{
	this->stamp = stamp;
	cout << "����������� ������" << endl;
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
	cout << "����������: �������" << endl;
	cout << "��������: " << stamp << endl;
	cout << "��� ���������: " << mark << endl;
	cout << "������������ ������������� �����������: " << number_seats << endl;
	cout << "��������� �����������: " << number_passengers << endl;
	cout << "���������� ������ � ��������: " << terminal_st << endl;
	cout << "������� ��������� �������� �����������: " << text << endl;
	cout << "------------------------------------" << endl;
}

void Strune::rewrite()
{
	cout << "------------------------------------" << endl;
	cout << "����������: ��������" << endl;
	cout << "������� ��������: ";
	getline(cin, stamp);
	getline(cin, stamp);
	cout << "������� ��� ���������: ";
	getline(cin, mark);
	cout << "������� ������������ ������������� �����������: ";
	getline(cin, number_seats);
	cout << "������� ��������� �����������: ";
	getline(cin, number_passengers);
	cout << "������� ���������� ������ � ��������: ";
	getline(cin, terminal_st);
	cout << "������� ������� �������� �����������: ";
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
	outfile << 2 << endl << stamp << endl << mark << endl << number_seats << endl << number_passengers << endl << terminal_st << endl << text << endl;
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
	case 6:
		this->text = red_str;
		break;
	default:
		cout << "������������ ����" << endl;
		break;
	}
}