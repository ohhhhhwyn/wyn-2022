#define _CRT_SECURE_NO_WARNINGS
#include "LinkedList.h"

void Test_one_LinkedList()
{
	ListNode* phead = NULL;

	ListNodePushBack(&phead, 1);
	ListNodePushBack(&phead, 2);
	ListNodePushBack(&phead, 3);
	ListNodePushBack(&phead, 4);
	printf("PushBack:\n");
	ListNodePrint(phead);

	ListNodePushFront(&phead, 5);
	ListNodePushFront(&phead, 6);
	ListNodePushFront(&phead, 7);
	ListNodePushFront(&phead, 8);
	printf("PushFront:\n");
	ListNodePrint(phead);

	ListNodePopBack(&phead);
	printf("PopBack:\n");
	ListNodePrint(phead);

	ListNodePopFront(&phead);
	printf("PopFront:\n");
	ListNodePrint(phead);

	ListNode* pos1 = ListFind(phead, 6);
	ListNodeInsertAfter(pos1, 999);
	printf("InsertAfter:6\n");
	ListNodePrint(phead);
	
	ListNode* pos2 = ListFind(phead, 1);
	ListNodeEraseAfter(pos2);
	printf("EraseAfter:1\n");
	ListNodePrint(phead);

	ListNodeDestory(&phead);
}

int main()
{
	Test_one_LinkedList();
	return 0;
}