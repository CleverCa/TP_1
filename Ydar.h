#pragma once

#include "Orchestra.h"

using namespace std;

class Ydar : public Orchestra
{
private:
	string stamp;
	string mark;
	string engineVol;
	string color;
	string typeKPP;

public:
	Ydar();
	~Ydar();
	Ydar(const Ydar& Car_copy);
	Ydar(string stamp);

	string get_stamp() const;
	void set_stamp(string stamp_ch);
	string get_mark() const;
	void set_mark(string mark_ch);
	string get_engineVol() const;
	void set_engineVol(string engineVol_ch);
	string get_color() const;
	void set_color(string color_ch);
	string get_typeKPP() const;
	void set_typeKPP(string typeKPP_ch);

	virtual void show();
	virtual void rewrite();
	virtual void saving();
	virtual void redact_str(int num_str, string red_str);
};