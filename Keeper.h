#pragma once

#include "Orchestra.h"
using namespace std;
using namespace std;

class Keeper
{
private:
	int size = 0;
	El* head = NULL;

public:
	Keeper();
	Keeper(int size);
	~Keeper();

	Orchestra* operator[] (int id);

	int get_size();
	void insert(Orchestra* new_data);
	void remove(int id);
	void save();
	void load();
};