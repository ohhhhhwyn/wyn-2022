#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DateType;

typedef struct ListNode
{
	DateType data;
	struct ListNode* next;
}ListNode;

void ListNodePrint(ListNode* phead);
void ListNodePushBack(ListNode** pphead, DateType x);
void ListNodePushFront(ListNode** pphead, DateType x);
void ListNodePopBack(ListNode** pphead);
void ListNodePopFront(ListNode** pphead);
ListNode* ListFind(ListNode* phead, DateType x);
void ListNodeInsertAfter(ListNode* pos, DateType x);
void ListNodeEraseAfter(ListNode* pos);
void ListNodeDestory(ListNode** pphead);