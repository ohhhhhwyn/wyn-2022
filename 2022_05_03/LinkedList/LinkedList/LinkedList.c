#define _CRT_SECURE_NO_WARNINGS
#include "LinkedList.h"

void ListNodePrint(ListNode* phead)
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

void ListNodePushBack(ListNode** pphead, DateType x)
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

void ListNodePushFront(ListNode** pphead, DateType x)
{
	ListNode* newnode = BuyListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void ListNodePopBack(ListNode** pphead)
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

void ListNodePopFront(ListNode** pphead)
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

ListNode* ListFind(ListNode* phead, DateType x)
{
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

void ListNodeInsertAfter(ListNode* pos, DateType x)
{
	assert(pos);

	ListNode* newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void ListNodeEraseAfter(ListNode* pos)
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

void ListNodeDestory(ListNode** pphead)
{
	assert(*pphead);

	free(*pphead);
	*pphead = NULL;
}