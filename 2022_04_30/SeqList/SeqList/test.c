#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void TestSeqList1()
{
	SeqList s;
	
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushFront(&s, 5);
	SeqListPushFront(&s, 6);
	SeqListPopFront(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	SeqListDestory(&s);

}

int main()
{
	TestSeqList1();
	return 0;
}