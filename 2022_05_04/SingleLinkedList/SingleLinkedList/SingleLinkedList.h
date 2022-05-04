#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int DateType;

typedef struct ListNode
{
	DateType data;
	struct ListNode* next;
}ListNode;

ListNode* BuyListNode(DateType x);
void ListPrint(ListNode* phead);
void ListPushBack(ListNode** pphead, DateType x);
void ListPushFront(ListNode** pphead, DateType x);
void ListPopBack(ListNode** pphead);
void ListPopFront(ListNode** pphead);
ListNode* ListFind(ListNode* phead, DateType x);
void ListInsertAfter(ListNode* pos, DateType x);
void ListEraseAfter(ListNode* pos);
void ListDestory(ListNode* phead);