#pragma once
#include <iostream>

template <typename T1, typename T2>
struct data
{
	T1 key[10];
	T2 item[10];
};

template<typename T1, typename T2>
class MyMap
{
public:

	int Size = 0;
	void insert(T1 key, T2 item);
	data<T1, T2> m;
};

template<typename T1, typename T2>
void MyMap<T1, T2>::insert(T1 key, T2 item)
{
	m.key[Size] = key;
	m.item[Size] = item;

	Size++;

	std::cout << "Start print" << std::endl;
	for (int i = 0; i < Size; i++)
	{
		std::cout << m.key[i] << " " << m.item[i] << std::endl;
	}
	std::cout << "End print" << std::endl;
}
