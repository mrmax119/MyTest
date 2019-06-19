#include <iostream>


using namespace std;

typedef enum access
{
	READ_ONLY = 0,
	READ_WRITE,
	READ_ADMIN,
	READ_WRITE_ADMIN,
	READ_WRITE_OS
} access_t;

typedef struct Heap
{
	void* data = nullptr;
	bool isMark = false;
	bool isBusy = false;
	access_t access = READ_WRITE;
} heap_t;

typedef struct Stack
{
	void* data;
	struct Stack* pNext;
} stack_t;

const static size_t HEAP_MAX_SIZE = 255;
const static size_t STACK_MAX_SIZE = 127;

typedef struct VirtualMemory
{
	heap_t heap[HEAP_MAX_SIZE];
	stack_t stack[STACK_MAX_SIZE];
	size_t heapCurSize = 0;
	size_t stackCurSize = 0;
	
	void freeHeap(size_t index);
	void addHeap(void* data, access_t access);
} VM;


void test1()
{
	VM vm;

	for (size_t i = 0; i < 10; i++)
	{
		vm.addHeap((void*)i, READ_WRITE);
	}

	vm.heap[4].isMark = true;

	for (size_t i = 0; i < vm.heapCurSize; i++)
	{
		vm.freeHeap(i);
	}

	vm.addHeap((void*)"str", READ_WRITE);
}

int main()
{


	system("pause");
	return 0;
}

void VirtualMemory::addHeap(void* data, access_t access)
{
	if (heapCurSize >= HEAP_MAX_SIZE)
		return;

	if (heapCurSize != 0)
	{
		for (size_t i = 1; i < heapCurSize + 1; i++)
		{
			if (!(heap[i].isBusy) && !(heap[i].isMark) && (heap[i].access == READ_WRITE))
			{
				heap[i].isBusy = true;
				heap[i].data = data;

				if (i == heapCurSize)
					heapCurSize++;

				break;
			}
		}
	}
	else
	{
		heap[0].isBusy = true;
		heap[0].data = data;
		heap[0].access = access;
		heapCurSize++;
	}
	
}

void VirtualMemory::freeHeap(size_t index)
{
	if (heap[index].isMark)
	{
		if (index == heapCurSize - 1)
		{
			heapCurSize--;
		}

		heap[index].isMark = false;
		heap[index].access = READ_WRITE;
		heap[index].data = nullptr;
		heap[index].isBusy = false;
	}
}
