#include "libra.h"

#include <iostream>
#include <locale>
#include <Windows.h>
#include <fstream>
#include <string>
#include "Keeper.h"
#include "Ydar.h"
#include "Strune.h"
#include "Dyhovie.h"

using namespace std;

Keep::Keep() : size(0), head(nullptr) {}
Keep::Keep(int size) : head(nullptr)
{
	this->size = size;
}
Keep::~Keep()
{
	if (head != NULL)
	{
		El* buffer;
		while (head->next != NULL)
		{
			buffer = head;
			head = head->next;
			buffer->data->~Orchestra();
			delete(buffer);
		}
		head->data->~Orchestra();
		delete(head);
	}
}
Orchestra* Keep::operator[] (const int id)
{
	if ((id >= size) || id < 0)
	{
		cout << "Неправильный индекс!" << endl;
		exit(1);
	}
	else
	{
		El* buffer = head;
		for (int i = 0; i < size - id - 1; i++)
		{
			buffer = buffer->next;
		}
		return (buffer->data);
	}
}
int Keep::get_size()
{
	return size;
}
void Keep::insert(Orchestra* new_data)
{
	El* tmp;
	tmp = new El;
	if (size == 0)
	{
		tmp->data = new_data;
		tmp->next = 0;
		++size;
	}
	else
	{
		tmp->data = new_data;
		tmp->next = head;
		++size;
	}
	head = tmp;
}
void Keep::remove(int id)
{
	if ((head != NULL) && (id < size) && (id >= 0))
	{
		El* temp = head, * temp2 = head;
		for (int i = 0; i < id; i++)
		{
			temp2 = temp;
			temp = temp->next;
		}
		if (temp == head)
		{
			head = temp->next;
		}
		else
		{
			temp2->next = temp->next;
		}
		temp->data->~Orchestra();
		delete(temp);
		size--;
	}
}
void Keep::save()
{
	ofstream outfile;
	string initfile = "data.txt";
	outfile.open(initfile);
	if (!outfile.is_open())
	{
		cout << "Error opening file!" << endl;
		exit(1);
	}
	else
	{
		outfile << size << endl;
		outfile.close();
	}
	El* buffer = head;
	for (int i = 0; i < size; i++)
	{
		buffer->data->saving();
		buffer = buffer->next;
	}
}
void Keep::load() {
	if (size != 0)
	{
		El* buffer;
		while (head->next != NULL)
		{
			buffer = head;
			head = head->next;
			buffer->data->~Orchestra();
			delete(buffer);
		}
		head->data->~Orchestra();
		delete(head);
	}
	ifstream infile;
	int read_size, num_Orchestra;
	string a, b, c, d, e;
	string initfile = "data.txt";
	Orchestra* Orchestra;
	infile.open(initfile);
	if (!infile.is_open())
	{
		cout << "Error opening!" << endl;
		exit(1);
	}
	infile >> read_size;
	for (int i = 0; i < read_size; i++)
	{
		infile >> num_Orchestra;
		infile.ignore(32767, '\n');

		if (num_Orchestra == 1)
		{
			//infile >> a >> b >> c >> d >> e;
			getline(infile, a);
			getline(infile, b);
			getline(infile, c);
			getline(infile, d);
			getline(infile, e);
			Dyhovie* dyh;
			dyh = new dyh;
			dyh->set_stamp(a);
			dyh->set_engineVol(b);
			dyh->set_color(c);
			dyh->set_typeKPP(d);
			dyh->set_mark(e);
			Orchestra = dyh;
			insert(Orchestra);
		}

		if (num_Orchestra == 2)
		{
			//infile >> a >> b >> c >> d >> e;
			getline(infile, a);
			getline(infile, b);
			getline(infile, c);
			getline(infile, d);
			getline(infile, e);
			Strune* strune;
			strune = new strune;
			strune->set_stamp(a);
			strune->set_mark(b);
			strune->set_engineVol(c);
			strune->set_enginePower(d);
			strune->set_locale(e);
			Orchestra = strune;
			insert(Orchestra);
		}

		if (num_Orchestra == 3)
		{
			//infile >> a >> b >> c >> d >> e;
			getline(infile, a);
			getline(infile, b);
			getline(infile, c);
			getline(infile, d);
			getline(infile, e);
			Ydar* ydar;
			ydar = new Ydar;
			ydar->set_stamp(a);
			ydar->set_mark(b);
			ydar->set_number_seats(c);
			ydar->set_number_passengers(d);
			ydar->set_terminal_st(e);
			Orchestra = ydar;
			insert(Orchestra);
		}
	}