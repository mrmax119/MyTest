#pragma once

class Static
{
public:
	static int x;
	void w(int x)
	{
		this->x = x;
	}
};
