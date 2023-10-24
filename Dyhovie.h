#pragma once

#include "Orchestra.h"

using namespace std;

class Dyhovie : public Orchestra 
{
private:
	string stamp;
	string mark;
	string engineVol;
	string enginePower;
	string locale;
	string defect;

public:
	Dyhovie();
	~Dyhovie();
	Dyhovie(const Dyhovie& Dyhovie_copy);
	Dyhovie(string stamp);
	string get_stamp() const;
	void set_stamp(string name_ch);
	string get_mark() const;
	void set_mark(string mark_ch);
	string get_engineVol() const;
	void set_engineVol(string engineVol_ch);
	string get_enginePower() const;
	void set_enginePower(string enginePower_ch);
	string get_locale() const;
	void set_locale(string locale_ch);
	string get_defect() const;
	void set_defect(string defect_ch);

	virtual void show();
	virtual void rewrite();
	virtual void saving();
	virtual void redact_str(int num_str, string red_str);
};