#include <iostream>
#include <locale>
#include <Windows.h>
#include <fstream>
#include <string>
#include "Menu.h"
#include "Ydar.h"
#include "Dyhovie.h"
#include "Strune.h"

using namespace std;

void Menu::main_menu()
{
	while (exit == 1)
	{
		switch (show_options())
		{
		case 1:
			show_all_orchestrs();
			break;
		case 2:
			change_data();
			break;
		case 3:
			add_new();
			break;
		case 4:
			save_to_file();
			break;
		case 5:
			load_from_file();
			break;
		case 6:
			delete_orchestrs();
			break;
		default:
			exit_from_programm();
			break;
		}
	}
}

int Menu::show_options() {
	int c1;
	cout << "\n����� �������� ���������?" << endl;
	cout << "1 - �������� ��� �����������" << endl;
	cout << "2 - �������� ������ � �����������" << endl;
	cout << "3 - �������� ����� ����������" << endl;
	cout << "4 - ��������� ��� ��������� � �����" << endl;
	cout << "5 - ��������� �� ����� ������ � ������������" << endl;
	cout << "6 - ������� ����������" << endl;
	cout << "0 - ����� �� ���������" << endl;
	cout << "-> ";
	cin >> c1;
	return c1;
}

void Menu::show_all_orchestrs()
{
	try
	{
		if (list.get_size() == 0) //��������� ��� ��������� ���� ��������
		{
			throw "������ ������������ ����";
		}
		for (int i = 0; i < list.get_size(); i++) 
		{
			cout << "_" << endl;
			cout << i + 1 << "|";
			list[i]->show(); //���� � �������� ������, ����� ���������� ������ ��� ������ ������ �������� show
		}
	}
	catch (const char* ex) { cout << ex << endl; }
}

void Menu::change_data()
{
	int c2, c3;
	try
	{
		cout << "�������� ����������, ������ �������� �� ���������(�� 1 �� " << list.get_size() << ")?" << endl;
		cin >> c2; //��� ������ �������
		if ((c2 < 1) || (c2 > list.get_size()))
		{
			throw "������������ ����";
		}
		list[c2 - 1]->show();
		cout << "����� ������ �� ������ ������(������� � 0)?" << endl;
		cout << "-> ";
		cin >> c3;
		cin.ignore(32767, '\n');
		cout << "������� ��������� - " << endl;
		cout << "-> ";
		if (c3 == 5)
		{
			bool fl = false;
			while (fl == false)
			{
				try 
				{
					getline(cin, redact);
					fl = true;
				}
				catch (...)
				{
					cout << "������� �����" << endl;
				}
			}
			list[c2 - 1]->redact_str(c3, redact);
		}
		else
		{
			getline(cin, redact);
			list[c2 - 1]->redact_str(c3, redact);
			cout << "������ ���� �������������" << endl;
		}
	}
	catch (const char* ex) { cout << ex << endl; }
}

void Menu::add_new()
{
	int c2;
	cout << "\n����� ���������� �� ������ ��������?" << endl;
	cout << "1 - �������" << endl;
	cout << "2 - �������" << endl;
	cout << "3 - ��������" << endl;
	cout << "0 - �����" << endl;
	cout << "-> ";
	cin >> c2;
	switch (c2)
	{
	case 1:
		Ydar * ydar;
		ydar = new Ydar;
		orchestrs = ydar;
		ydar->rewrite(); //��������������
		list.insert(orchestrs); //��������� � ������
		cout << "����� ����������(�������) ��� ��������." << endl;
		break;

	case 2:
		Dyhovie * dyh;
		dyh = new Dyhovie;
		orchestrs = dyh;
		dyh->rewrite();
		list.insert(orchestrs);
		cout << "����� ����������(�������) ��� ��������." << endl;
		break;

	case 3:
		Strune * emp;
		emp = new Strune;
		orchestrs = emp;
		emp->rewrite();
		list.insert(orchestrs);
		cout << "����� ����������(��������) ��� ��������." << endl;
		break;
	default:
		break;
	}
}

void Menu::save_to_file()
{
	try
	{
		if (list.get_size() == 0)
		{
			throw "����� ������ ���������";
		}
		list.save();
		cout << "������ ���������" << endl;
	}
	catch (const char* ex) { cout << ex << endl; }
}

void Menu::load_from_file()
{
	try
	{
		list.load();
		cout << "������ ���������" << endl;
	}
	catch (const char* ex) { cout << ex << endl; }
}

void Menu::delete_orchestrs()
{
	int c2;
	cout << "����� ���������� �� ������ �������(�� 1 �� " << list.get_size() << ")?" << endl;
	for (int i = 0; i < list.get_size(); i++)
	{
		cout << "_" << endl;
		cout << i + 1 << "|";
		list[i]->show();
	}
	cout << "-> ";
	cin >> c2;
	c2 = list.get_size() - c2 + 1;
	try {
		if ((c2 < 1) || (c2 > list.get_size()))
		{
			throw "������������ ����";
		}
		list.remove(c2 - 1);
		cout << "������ ���������� ��� ������" << endl;
	}
	catch (const char* i)
	{
		cout << i << endl;
	}
}

void Menu::exit_from_programm()
{
	exit = 0;
}