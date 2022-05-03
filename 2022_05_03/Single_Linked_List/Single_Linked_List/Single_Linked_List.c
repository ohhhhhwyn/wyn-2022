#define _CRT_SECURE_NO_WARNINGS
#include "Single_Linked_List.h"

void ListPrint(ListNode* phead)
{
	ListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;

	}
	printf("NULL\n");
}

ListNode* BuyListNode(DateType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	if (node == NULL)
	{
		printf("malloc fail!\n");
		exit(-1);
	}
	else
	{
		node->data = x;
		node->next = NULL;
	}
	return node;
}

void ListPushBack(ListNode** pphead, DateType x)
{
	ListNode* newnode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		ListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

void ListPushFront(ListNode** pphead, DateType x)
{
	ListNode* newnode = BuyListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void ListPopBack(ListNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		ListNode* prev = NULL;
		ListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		prev->next = NULL;
	}
}

void ListPopFront(ListNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		ListNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	}
}