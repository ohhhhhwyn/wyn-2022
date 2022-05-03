#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void SeqListInit(SeqList* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SeqList* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListPrint(SeqList* ps)
{
	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListCheckCapacity(SeqList* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		int newcapacity = (ps->capacity == 0) ? 4 : (ps->capacity * 2);
		SLDateType* newA = (SLDateType*)realloc(ps->a, sizeof(SeqList) * newcapacity);
		if (newA == NULL)
		{
			printf("realloc error!\n");
			exit(-1);
		}
		ps->a = newA;
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SeqList* ps, SLDateType x)
{
	/*assert(ps);

	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	++ps->size;*/

	SeqListInsert(ps, ps->size, x);
}

void SeqListPushFront(SeqList* ps, SLDateType x)
{
	/*assert(ps);

	SeqListCheckCapacity(ps);

	int end = ps->size;
	while (end > 0)
	{
		ps->a[end] = ps->a[end - 1];
		--end;
	}
	ps->a[0] = x;
	++ps->size;*/

	SeqListInsert(ps, 0, x);
}

void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	SeqListCheckCapacity(ps);

	int end = ps->size;
	while (end > pos)
	{
		ps->a[end] = ps->a[end - 1];
		--end;
	}
	ps->a[pos] = x;
	++ps->size;
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

	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		++begin;
	}
	--ps->size;*/

	SeqListErase(ps, 0);
}

void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);
	assert(ps->size);
	assert(pos >= 0 && pos < ps->size);

	int begin = pos;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		++begin;
	}
	--ps->size;
}