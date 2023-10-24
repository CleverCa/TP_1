#pragma once

using namespace std;

class Orchestra 
{
public:
	Orchestra() {};
	virtual ~Orchestra() {};
	virtual void show() = 0;
	virtual void rewrite() = 0;
	virtual void saving() = 0;
	virtual void redact_str(int num_str, string red_str) = 0;
};

typedef struct El
{
	Orchestra* data;
	El* next;
} El;