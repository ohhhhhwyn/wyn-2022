#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void SeqListTest_one()
{
	SeqList s;
	SeqListInit(&s);
	
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	printf("PushBack:\n");
	SeqListPrint(&s);
	SeqListPushFront(&s, 9);
	SeqListPushFront(&s, 8);
	SeqListPushFront(&s, 7);
	SeqListPushFront(&s, 6);
	printf("PushFront:\n");
	SeqListPrint(&s);
	SeqListInsert(&s, 3, 5);
	printf("Insert:\n");
	SeqListPrint(&s);
	SeqListPopBack(&s);
	printf("PopBack:\n");
	SeqListPrint(&s);
	SeqListPopFront(&s);
	printf("PopBack:\n");
	SeqListPrint(&s);
	SeqListErase(&s, 2);
	printf("Erase:\n");
	SeqListPrint(&s);

	SeqListDestory(&s);
}

int main()
{
	SeqListTest_one();
	return 0;
}