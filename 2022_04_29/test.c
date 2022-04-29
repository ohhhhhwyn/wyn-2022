#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

void TestSeqList1()
{
	//�����ṹ�����
	SeqList s;

	//��ʼ��
	SeqListInit(&s);

	//β��
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	
	//ͷ��
	SeqListPushFront(&s, 7);
	SeqListPushFront(&s, 8);
	SeqListPushFront(&s, 9);

	//βɾ
	SeqListPopBack(&s);

	//ͷɾ
	SeqListPopFront(&s);

	//��ӡ
	SeqListPrint(&s);

	//����
	SeqListDestory(&s);
}

int main()
{
	TestSeqList1();
	return 0;
}