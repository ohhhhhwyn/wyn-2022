#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

//��ӡ
void SeqListPrint(SeqList* pq)
{
	assert(pq);

	for (int i = 0; i < pq->size; i++)
	{
		printf("%d ", pq->a[i]);
	}
	printf("\n");
}

//��ʼ��
void SeqListInit(SeqList* pq)
{
	assert(pq);

	pq->a = NULL;
	pq->size = 0;
	pq->capacity = 0;
}

//����
void SeqListDestory(SeqList* pq)
{
	assert(pq);

	free(pq->a);

	pq->a = NULL;
	pq->size = 0;
	pq->capacity = 0;
}

//�������
void SeqCheckCapacity(SeqList* pq)
{
	assert(pq);

	if (pq->size == pq->capacity)
	{
		int newcapacity = pq->capacity == 0 ? 4 : pq->capacity * 2;
		SeqDataType* newA = realloc(pq->a, sizeof(SeqDataType) * newcapacity);
		if (newA == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		pq->a = newA;
		pq->capacity = newcapacity;
	}
}

//β��
void SeqListPushBack(SeqList* pq, SeqDataType x)
{
	assert(pq);

	SeqCheckCapacity(pq);

	pq->a[pq->size] = x;
	pq->size++;
}

//ͷ��
void SeqListPushFront(SeqList* pq, SeqDataType x)
{
	assert(pq);

	SeqCheckCapacity(pq);

	int end = pq->size - 1;
	while (end >= 0)
	{
		pq->a[end + 1] = pq->a[end];
		end--;
	}
	pq->a[0] = x;
	pq->size++;
}

//βɾ
void SeqListPopBack(SeqList* pq)
{
	assert(pq);
	assert(pq->size > 0);

	--pq->size;
}

//ͷɾ
void SeqListPopFront(SeqList* pq)
{
	assert(pq);
	assert(pq->size > 0);

	int begin = 0;
	while (begin < pq->size - 1)
	{
		pq->a[begin] = pq->a[begin + 1];
		begin++;
	}
	--pq->size;
}