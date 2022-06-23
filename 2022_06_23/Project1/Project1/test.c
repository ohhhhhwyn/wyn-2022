#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>

//typedef unsigned int u_int;
//
//int main()
//{
//	u_int a = 0;
//	unsigned int b = 0;
//
//	system("pause");
//	return 0;
//}

//typedef struct student {
//	char name[10];
//	int age;
//}student;
//
//int main()
//{
//	student s = { "zhangsan",18 };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//
//	system("pause");
//	return 0;
//}

//typedef int* int_p;
//
//int main()
//{
//	int a, b, c;
//
//	int* _a, _b, _c;
//
//	int_p a_, b_, c_;
//
//	system("pause");
//	return 0;
//}

//typedef int a[10];
//
//int main()
//{
//	a b = { 0,1,2,3,4,5,6,7,8,9 };
//
//	system("pause");
//	return 0;
//}
//
//#define INT_P int*
//typedef int* int_p;
//
//int main()
//{
//	
//	int* a, b, c;
//	INT_P _a, _b, _c;
//	int_p a_, b_, c_;
//
//	system("pause");
//	return 0;
//}
//
//#define U_32 unsigned
//typedef unsigned u_32;
//
//int main()
//{
//
//	U_32 int a = 0;
//	u_32 int b = 0;
//
//	system("pause");
//	return 0;
//}


//#define A int [10]
//typedef int a[10] ;
//
//int main()
//{
//	A arr1 = { 0 };
//	a arr2 = { 0 };
//
//	system("pause");
//	return 0;
//}
//
//typedef static unsigned int s_int;
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int /*   */ i;						//正确
//
//	char* s = "abcdefg     //hijklmn";	//正确
//
//	//Is it a\
//	valid comment?						//正确
//
//	in/* */t j;							//报错
//
//
//	system("pause");
//	return 0;
//}

///*这是*/#/*一条*/define /*合法的*/unsigned /*预处理*/int /*指令*/u_int
//# define unsigned char u_char
//#define unsigned short u_short
//int main()
//{
//	u_int a = 0;
//	u_char c = '\0';
//	u_short s = 0;
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	/*
//	/*
//	printf("%s\n", "hello world!");
//	*/
//	*/
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int* p = &n;
//	int x = 5;
//	int y = x / (*p);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//循环一
//	for (;;) {
//		//循环二
//		for (;;) {
//			//循环三
//			for (;;) {
//				;
//			}//循环三结束
//		}//循环二结束
//	}//循环一结束
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	printf("hello world!\n");
//	printf("hello world!\n");
////#if 后面为真则运行，为假则不运行
//#if 0
//	printf("hello world!\n");
//	printf("hello world!\n");
//	printf("hello world!\n");
//	printf("hello world!\n");
//#endif 
//
//	system("pause");
//	return 0;
//}

int main()
{
	printf("hello world!\n");
	printf("hello world!\n");

	if (0) {
		printf("hello world!\n");
		printf("hello world!\n");
		printf("hello world!\n");
		printf("hello world!\n");
	}

	system("pause");
	return 0;
}