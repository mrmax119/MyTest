#include <iostream>

using namespace std;

size_t __cdecl getSize(const char * str)
{	 
	const char *eos = str;
	
	while (*eos++);
	
	return((int)(eos - str - 1));
}

class MyList
{
public:
	size_t size;

	MyList()
	{
		size = 0;
		pHead = nullptr;
	}

	class Node
	{
	public:
		int value;
		Node* pNext;


		Node(int value = 0, Node *pNext = nullptr)
		{
			this->value = value;
			this->pNext = pNext;
		}
	};


	void push_back(int value);

private:
	Node* pHead;
};

void MyList::push_back(int value)
{
	//Node* node = (Node*)malloc(sizeof(Node) * 1);

	if (pHead == nullptr)
	{
		pHead = new Node(value);
	}
	else
	{
		Node* current = this->pHead;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}

		current->pNext = new Node(value);

		size++;

	}
}

int main()
{



	system("pause");
	return 0;
}


