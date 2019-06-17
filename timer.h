#include <cstdint>
#include <iostream>
#include <ctime>

#pragma once

class timer
{
public:

	unsigned int count = 0;
	unsigned int oldCount = 0;

	timer()
	{
	}
	

	typedef struct myClock
	{
		uint16_t h = 0;
		uint16_t m = 0;
		uint16_t s = 0;
	} myTime;

	myTime _t;

	void countOfTime()
	{
		if (count >= 1000)
		{
			_t.s++;

			oldCount += count;
			count = 0;

			if (_t.s >= 60)
			{
				_t.s = 0;
				_t.m++;
			}

			if (_t.m >= 60)
			{
				_t.m = 0;
				_t.h++;
			}

			std::cout << _t.h << ":" << _t.m << ":" << _t.s << std::endl;
		}
		else
		{
			count = clock() - oldCount;
		}

		//	std::cout << count << std::endl;
	}
};