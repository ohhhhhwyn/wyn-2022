#define _CRT_SECURE_NO_WARNINGS
#include "Single_Linked_List.h"

void Test_one_LinkedList()
{
	ListNode* phead = NULL;
	ListPushBack(&phead, 1);
	ListPushBack(&phead, 2);
	ListPushBack(&phead, 3);
	ListPushBack(&phead, 4);
	ListPrint(phead);
	ListPushFront(&phead, 5);
	ListPushFront(&phead, 6);
	ListPushFront(&phead, 7);
	ListPushFront(&phead, 8);
	ListPrint(phead);
	ListPopBack(&phead);
	ListPrint(phead);
	ListPopBack(&phead);
	ListPrint(phead);
	ListPopFront(&phead);
	ListPrint(phead);
	ListPopFront(&phead);
	ListPrint(phead);
}

int main()
{
	Test_one_LinkedList();
	return 0;
}