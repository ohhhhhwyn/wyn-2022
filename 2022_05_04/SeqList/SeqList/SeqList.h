#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int DateType;

typedef struct SeqList
{
	DateType* array;
	int size;
	int capacity;
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListDestory(SeqList* ps);
void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, DateType x);
void SeqListPushFront(SeqList* ps, DateType x);
void SeqListPopBack(SeqList* ps);
void SeqListPopFront(SeqList* ps);
int SeqListFind(SeqList* ps, DateType x);
void SeqListInsert(SeqList* ps, int pos, DateType x);
void SeqListErase(SeqList* ps, int pos);