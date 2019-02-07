#pragma once
#include <iostream>

constexpr auto MY_NULL = 0;
class TypicalAlgorithms
{
public:
	TypicalAlgorithms();
	~TypicalAlgorithms();
	void reverseString(std::string str);
	void bubleSort(int* arr);
	int getSize(const char* val);
	int getSize(char* val);
	int getSize(int* arr);
	TypicalAlgorithms& c(const int &a);
	friend std::ostream& operator<<(std::ostream& stream, const TypicalAlgorithms& vector);
private:
	char* str = 0;
};

