#pragma once

#include "Orchestra.h"
using namespace std;
class Strune : public Orchestra //модификатор транспорта
{
private:
	//Данные об инструменте
	string stamp;
	string FIO;
	string name_proz;
	string cost_instr;
	string kolvo_instr;
	string text;

public:
	//Все конструкторы для обьекта
	Strune(); 
	~Strune();
	Strune(const Strune& Strune_copy);
	Strune(string stamp);

	//Задавать или брать значения из класса 
	string get_stamp() const;  //Брать
	void set_stamp(string name_ch);  //Задавать
	string get_FIO() const;
	void set_FIO(string FIO_ch);
	string get_name_proz() const;
	void set_name_proz(string name_proz_ch);
	string get_cost_instr() const;
	void set_cost_instr(string cost_instr_ch);
	string get_kolvo_instr() const;
	void set_kolvo_instr(string kolvo_instr_ch);
	string get_text() const;
	void set_text(string terminal_st_ch);


	virtual void show();
	virtual void rewrite();
	virtual void saving();
	virtual void redact_str(int num_str, string red_str);
	virtual bool averFIO(double a) { return false; };
};