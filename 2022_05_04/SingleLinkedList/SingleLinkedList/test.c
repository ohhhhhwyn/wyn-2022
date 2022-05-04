#define _CRT_SECURE_NO_WARNINGS
#include "SingleLinkedList.h"

void Test_one_SingleLinkedList()
{
	ListNode* phead = NULL;

	ListPushBack(&phead, 1);
	ListPushBack(&phead, 2);
	ListPushBack(&phead, 3);
	ListPushBack(&phead, 4);
	printf("PushBack:\n");
	ListPrint(phead);

	ListPushFront(&phead, 5);
	ListPushFront(&phead, 6);
	ListPushFront(&phead, 7);
	ListPushFront(&phead, 8);
	printf("PushFront:\n");
	ListPrint(phead);

	ListPopBack(&phead);
	printf("PopBack:\n");
	ListPrint(phead);

	ListPopFront(&phead);
	printf("PopFront:\n");
	ListPrint(phead);
}

int main()
{
	Test_one_SingleLinkedList();
	return 0;
}