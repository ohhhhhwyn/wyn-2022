#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;
	int capacity;
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListDestory(SeqList* ps);
void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);
void SeqListPushFront(SeqList* ps, SLDateType x);
void SeqListPopBack(SeqList* ps);
void SeqListPopFront(SeqList* ps);