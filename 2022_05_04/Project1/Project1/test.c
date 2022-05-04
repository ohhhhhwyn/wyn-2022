#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 顺序表的静态存储
	#define N 7
	//typedef int DataType;
	typedef struct SeqList
	{
		DataType array[N]; // 定长数组
		size_t size;	   // 有效数据的个数
	}SeqList;
	// 顺序表的动态存储
	typedef int DataType;
	typedef struct SeqList
	{
		DataType* array;  // 指向动态开辟的数组
		size_t size;	  // 有效数据个数
		size_t capicity;  // 容量空间的大小
	}SeqList;
	return 0;
}