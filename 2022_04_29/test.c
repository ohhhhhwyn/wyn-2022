#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList1()
{
	//创建结构体变量
	SeqList s;

	//初始化
	SeqListInit(&s);

	//尾插
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	
	//头插
	SeqListPushFront(&s, 7);
	SeqListPushFront(&s, 8);
	SeqListPushFront(&s, 9);

	//尾删
	SeqListPopBack(&s);

	//头删
	SeqListPopFront(&s);

	//打印
	SeqListPrint(&s);

	//销毁
	SeqListDestory(&s);
}

int main()
{
	TestSeqList1();
	return 0;
}