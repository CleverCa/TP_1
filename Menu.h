#pragma once

#include <iostream>
#include <fstream>
#include "Keeper.h"
#include "Orchestra.h"

class Menu //����� ����
{
protected:
	Keeper list; //��� �������� ������ ��������
	Orchestra* orchestrs; //������������ ��� ��������� �����������(��������� �� ���������� ������)
	string redact;//��������� ������, ����� �����������
	int exit = 1;

public:
	void main_menu(); 
	int show_options(); //��������� ������� ��� ����
	void show_all_orchestrs(); //��������� ���� �������
	void change_data(); //�������� ������
	void add_new(); //�������� �����
	void save_to_file(); //��������� ����
	void load_from_file(); //�������� �� �����
	void delete_orchestrs(); //������� ����������
	void exit_from_programm(); //�����
};