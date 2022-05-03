#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int DateType;

typedef struct ListNode
{
	DateType data;
	struct ListNode* next;

}ListNode;

void ListPrint(ListNode* phead);
void ListPushBack(ListNode** pphead, DateType x);
void ListPushFront(ListNode** pphead, DateType x);
void ListPopBack(ListNode** pphead);
void ListPopFront(ListNode** pphead);