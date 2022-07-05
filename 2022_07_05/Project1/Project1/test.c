#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d\n", *(a + 1));
//	printf("%d\n", *(ptr - 1));
//
//	system("pause");
//	return 0;
//}

//结构体的大小是20个字节
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p的值为0x100000。 如下表表达式的值分别为多少？
int main()
{

	printf("%p\n", p);
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);

	system("pause");
	return 0;
}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x\n", ptr1[-1]);
//	printf("%x\n", *ptr2);
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p\n", &p[4][2] - &a[4][2]);
//	printf("%d\n", &p[4][2] - &a[4][2]);
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d\n", *(ptr1 - 1));
//	printf("%d\n", *(ptr2 - 1));
//
//	system("pause");
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	system("pause");
//	return 0;
//}