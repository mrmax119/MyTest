#include <iostream>

using namespace std;

typedef enum Types
{
	INT,
	DOUBLE,
	TWIN
} T;

typedef struct
{
	int x;
	double y;
} twin;

void* setAddr(T type)
{
	void* x = nullptr;

	if (type == INT)
	{
		x = (int*)malloc(sizeof(int));
	}
	else if (type == DOUBLE)
	{
		x = (double*)malloc(sizeof(double));
	}
	else if (type == TWIN)
	{
		x = (twin*)malloc(sizeof(twin));
	}

	return x;
}

void setInt(int* var, int val)
{
	*var = val;
}

void setDouble(double* var, double val)
{
	*var = val;
}

void setTwin(twin* var, int val1, double val2)
{
	var->x = val1;
	var->y = val2;
}

void del(void* block)
{
	free(block);
}

typedef struct
{
	int* addr;
	int value;
	bool isMarked;
} marks;

void mark(marks* m, int val, int index)
{
	//m[index].addr = &val;
	//m[index].value = val;
	m[index].isMarked = true;
	std::cout << &m[index].addr << std::endl;
	std::cout << m[index].value << std::endl;
	std::cout << m[index].isMarked << std::endl;
	std::cout << index << std::endl;
}

int main()
{


	system("pause");
	return 0;
}

