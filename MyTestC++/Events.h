#pragma once
#include "Keys.h"

class Events : public Keys
{
public:
	Events();
	~Events();
	void check(int key, int action);

private:
	int key, action;
};

