#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void SeqListInit(SeqList* ps)
{
	assert(ps);

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
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity = 0 ? 4 : ps->capacity * 2;
		SLDateType* newA = realloc(ps->a,sizeof(SeqList) * newcapacity);
		if (newA == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = newA;
		ps->capacity = newcapacity;
	}
}

void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);

	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);

	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	assert(ps->size > 0);

	int begin = 0;
	while (begin < ps->size - 1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	--ps->size;
}

void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	assert(ps->size > 0);

	--ps->size;
}