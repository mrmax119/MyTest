#include "TypicalAlgorithms.h"

TypicalAlgorithms::TypicalAlgorithms()
{

}

TypicalAlgorithms& TypicalAlgorithms::c(const int &a)
{
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const TypicalAlgorithms& vector)
{
	stream << vector.str;
	return stream;
}

TypicalAlgorithms::~TypicalAlgorithms()
{
}


void TypicalAlgorithms::reverseString(std::string str)
{
	//int size = getSize(str);
	for (int i = 0, j = str.size() - 1; i < j; i++, j--)
	{
		char temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}

	std::cout << str.c_str() << std::endl;
}

void TypicalAlgorithms::bubleSort(int * arr)
{
	int size = getSize(arr);
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int TypicalAlgorithms::getSize(const char * val)
{
	int i = 0;
	while (val[i] != NULL)
	{
		i++;
	}
	std::cout << i << std::endl;

	return i;
}

int TypicalAlgorithms::getSize(int * arr)
{
	int i = 0;
	while ((char)arr[i] != NULL)
	{
		i++;
	}

	i -= 2;

	std::cout << std::string("Size of array: ").c_str() << i << std::endl;

	return i;
}
