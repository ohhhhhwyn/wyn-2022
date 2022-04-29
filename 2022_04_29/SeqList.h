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

//�ڴ��й������ݵĽӿ�

//��ӡ
void SeqListPrint(SeqList* pq);

//��ʼ��
void SeqListInit(SeqList* pq);

//����
void SeqListDestory(SeqList* pq);

//β��
void SeqListPushBack(SeqList* pq, SeqDataType x);

//ͷ��
void SeqListPushFront(SeqList* pq, SeqDataType x);

//βɾ
void SeqListPopBack(SeqList* pq);

//ͷɾ
void SeqListPopFront(SeqList* pq);