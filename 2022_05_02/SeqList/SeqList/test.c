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
	printf("PushBack£º\n");
	SeqListPrint(&s);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	printf("PushFront£º\n");
	SeqListPrint(&s);
	SeqListPopBack(&s);
	printf("PopBack£º\n");
	SeqListPrint(&s);
	SeqListPopFront(&s);
	printf("PopFront£º\n");
	SeqListPrint(&s);
	SeqListInsert(&s, 3, 9);
	printf("Insert£º\n");
	SeqListPrint(&s);
	SeqListErase(&s, 2);
	printf("Erase£º\n");
	SeqListPrint(&s);
	SeqListDestory(&s);
}

#include<stdio.h>
int main()
{
	SeqListTest_one();
	return 0;
}