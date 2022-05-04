#define _CRT_SECURE_NO_WARNINGS
#include "SingleLinkedList.h"

ListNode* BuyListNode(DateType x)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	if (node == NULL)
	{
		printf("malloc fail!\n");
		exit(-1);
	}
	node->data = x;
	node->next = NULL;
	return node;
}

void ListPrint(ListNode* phead)
{
	while (phead != NULL)
	{
		printf("%d->", phead->data);
		phead = phead->next;
	}
	printf("NULL\n");
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
	assert(*pphead);

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		ListNode* prev = *pphead;
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
	assert(*pphead);

	if ((*pphead)->next == NULL)
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

ListNode* ListFind(ListNode* phead, DateType x)
{
	assert(phead);

	ListNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return cur;
}

void ListInsertAfter(ListNode* pos, DateType x)
{
	assert(pos);

	ListNode* newnode = BuyListNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}

void ListEraseAfter(ListNode* pos)
{
	assert(pos);
	if (pos->next == NULL)
	{
		return;
	}
	else
	{
		ListNode* next = pos->next;
		pos->next = next->next;
		free(next);
		next = NULL;
	}
}

void ListDestory(ListNode* phead)
{
	assert(phead);

	free(phead);
	phead = NULL;
}