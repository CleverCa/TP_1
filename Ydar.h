#pragma once

#include "Orchestra.h"

using namespace std;

class Ydar : public Orchestra
{
private:
	string stamp; //Тип
	string nazvanie; //Название
	string cost; //Стоимость
	string kolvo_instr; //Количество инструментов в оркестре
	string FIO; //ФИО владельца

public:
	Ydar();
	~Ydar();
	Ydar(const Ydar& Car_copy);
	Ydar(string stamp);

	string get_stamp() const;
	void set_stamp(string stamp_ch);
	string get_nazvanie() const;
	void set_nazvanie(string nazvanie_ch);
	string get_cost() const;
	void set_cost(string cost_ch);
	string get_kolvo_instr() const;
	void set_kolvo_instr(string kolvo_instr_ch);
	string get_FIO() const;
	void set_FIO(string FIO_ch);

	virtual void show();
	virtual void rewrite();
	virtual void saving();
	virtual void redact_str(int num_str, string red_str);
};