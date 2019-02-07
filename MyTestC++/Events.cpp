#include "Events.h"
#include <iostream>

Events::Events()
{
}


Events::~Events()
{
}

void Events::check(int key, int action)
{
	this->key = key;
	this->action = action;

	Keys keys;

	std::cout << keys.getKey(key) << std::endl;
}
