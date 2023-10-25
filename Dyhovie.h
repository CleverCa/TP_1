#pragma once

#include "Orchestra.h"

using namespace std;

class Dyhovie : public Orchestra 
{
private:
	string stamp;
	string name_proz;
	string cost;
	string FIO;
	string kolvo_instr;
	string defect;

public:
	Dyhovie();
	~Dyhovie();
	Dyhovie(const Dyhovie& Dyhovie_copy);
	Dyhovie(string stamp);

	string get_stamp() const;
	void set_stamp(string name_ch);
	string get_name_proz() const;
	void set_name_proz(string name_proz_ch);
	string get_cost() const;
	void set_cost(string cost_ch);
	string get_FIO() const;
	void set_FIO(string FIO_ch);
	string get_kolvo_instr() const;
	void set_kolvo_instr(string kolvo_instr_ch);
	string get_defect() const;
	void set_defect(string defect_ch);

	virtual void show();
	virtual void rewrite();
	virtual void saving();
	virtual void redact_str(int num_str, string red_str);
};