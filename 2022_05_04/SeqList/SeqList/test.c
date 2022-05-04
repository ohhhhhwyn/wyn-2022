#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList()
{
	SeqList s;
	SeqListInit(&s);

	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	printf("PushBack:\n");
	SeqListPrint(&s);

	SeqListPushFront(&s, 5);
	SeqListPushFront(&s, 6);
	SeqListPushFront(&s, 7);
	SeqListPushFront(&s, 8);
	printf("PushFront:\n");
	SeqListPrint(&s);

	SeqListPopBack(&s);
	printf("PopBack:\n");
	SeqListPrint(&s);

	SeqListPopFront(&s);
	printf("PopFront:\n");
	SeqListPrint(&s);

	int pos = SeqListFind(&s, 5);
	printf("%d ", pos);

	SeqListDestory(&s);
}

int main()
{
	TestSeqList();
	return 0;
}