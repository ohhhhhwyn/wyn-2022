#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// ˳���ľ�̬�洢
	#define N 7
	//typedef int DataType;
	typedef struct SeqList
	{
		DataType array[N]; // ��������
		size_t size;	   // ��Ч���ݵĸ���
	}SeqList;
	// ˳���Ķ�̬�洢
	typedef int DataType;
	typedef struct SeqList
	{
		DataType* array;  // ָ��̬���ٵ�����
		size_t size;	  // ��Ч���ݸ���
		size_t capicity;  // �����ռ�Ĵ�С
	}SeqList;
	return 0;
}