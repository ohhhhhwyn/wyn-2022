#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int SeqDataType;

typedef struct SeqList
{
	SeqDataType* a;
	int size;
	int capacity;
}SeqList;

//内存中管理数据的接口

//打印
void SeqListPrint(SeqList* pq);

//初始化
void SeqListInit(SeqList* pq);

//销毁
void SeqListDestory(SeqList* pq);

//尾插
void SeqListPushBack(SeqList* pq, SeqDataType x);

//头插
void SeqListPushFront(SeqList* pq, SeqDataType x);

//尾删
void SeqListPopBack(SeqList* pq);

//头删
void SeqListPopFront(SeqList* pq);