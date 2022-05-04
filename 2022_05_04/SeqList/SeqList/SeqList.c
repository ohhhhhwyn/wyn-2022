#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void SeqListInit(SeqList* ps)
{
	ps->array = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SeqList* ps)
{
	assert(ps);
	assert(ps->capacity);

	free(ps->array);
	ps->array = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListPrint(SeqList* ps)
{
	assert(ps);
	assert(ps->size);

	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}

void SeqListCheckCapacity(SeqList* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		int newCapacity = (ps->capacity == 0) ? 4 : (ps->capacity * 2);
		DateType* newArray = (DateType*)realloc(ps->array, sizeof(DateType) * newCapacity);
		if (newArray == NULL)
		{
			printf("realloc fail!\n");
			exit(-1);
		}
		ps->array = newArray;
		ps->capacity = newCapacity;
	}
}

void SeqListPushBack(SeqList* ps, DateType x)
{
	/*assert(ps);

	SeqListCheckCapacity(ps);

	ps->array[ps->size] = x;
	++ps->size;*/

	SeqListInsert(ps, ps->size, x);
}

void SeqListPushFront(SeqList* ps, DateType x)
{
	/*assert(ps);

	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->array[end + 1] = ps->array[end];
		--end;
	}
	ps->array[0] = x;
	++ps->size;*/

	SeqListInsert(ps, 0, x);
}

void SeqListPopBack(SeqList* ps)
{
	/*assert(ps);
	assert(ps->size);

	--ps->size;*/

	SeqListErase(ps, ps->size - 1);
}

void SeqListPopFront(SeqList* ps)
{
	/*assert(ps);
	assert(ps->size);

	int begin = 1;
	while (begin < ps->size)
	{
		ps->array[begin - 1] = ps->array[begin];
		++begin;
	}
	--ps->size;*/

	SeqListErase(ps, 0);
}

int SeqListFind(SeqList* ps, DateType x)
{
	assert(ps);
	assert(ps->size);

	for (int i = 0; i < ps->size; i++)
	{
		if (ps->array[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* ps, int pos, DateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->array[end + 1] = ps->array[end];
		--end;
	}
	ps->array[pos] = x;
	++ps->size;
}

void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	assert(ps->size);
	assert(pos >= 0 && pos < ps->size);

	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->array[begin - 1] = ps->array[begin];
		++begin;
	}
	--ps->size;
}