#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 5;
//	int arr[5][5] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j <= i; ++j)
//		{
//			if (j == 0 || j == i)
//			{
//				printf("%d ", 1);
//				arr[i][j] = 1;
//			}
//			else
//			{
//				printf("%d ", arr[i - 1][j] + arr[i - 1][j - 1]);
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (int A = 1; A <= 5; ++A)
//	{
//		for (int B = 1; B <= 5; ++B)
//		{
//			for (int C = 1; C <= 5; ++C)
//			{
//				for (int D = 1; D <= 5; ++D)
//				{
//					for (int E = 1; E <= 5; ++E)
//					{	
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1 &&
//							A * B * C * D * E == 120)
//						{
//							printf("A = %d\nB = %d\nC = %d\nD = %d\nE = %d\n", A, B, C, D, E);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (char killer = 'A'; killer <= 'D'; ++killer)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("杀人凶手是 %c\n", killer);
//		}
//	}
//	return 0;
//}
////第一个void代表无返回值
////第二个void代表无需参数
//void test1(void)
//{
//	;
//}
////void*代表接受任意类型的指针
//void test2(void* p)
//{
//	;
//}
//int main()
//{
//	int b = -10;
//	return 0;
//}
//输出结果是什么？
//#include <stdio.h>
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("%d %d %d\n", a, b, c);//答案分别是-1、-1、255
//    return 0;
//}
//输出结果是什么？
//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    printf("%u\n", a);//输出4294967168 
//    printf("%d\n", a);//输出-128
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//10000000 00000000 00000000 00010100
//11111111 11111111 11111111 11101011
//11111111 11111111 11111111 11101100 -20
//00000000 00000000 00000000 00001010  10
//---------------------------------------
//11111111 11111111 11111111 11110110 补码
//10000000 00000000 00000000 00001001 反码
//10000000 00000000 00000000 00001010 原码 -10
//#include <stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//00000000 00000000 00000000 00001001
//00000000 00000000 00000000 00000001
//00000000 00000000 00000000 00000000
//11111111 11111111 11111111 11111111
//00000000 00000000 00000000 00000000
//
//#include <stdio.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		printf("%d\n", i);
//	}
//	return 0;
//}
////11111111
////00000000
////00000001
#include <stdio.h>
void test(int* arr2, int arr2Size, int target)
{
    int left = 0;
    int right = arr2Size - 1;
    while (left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if (target <= arr2[mid])
        {
            right = mid - 1;
        }
        else if(target > arr2[mid])
        {
            left = mid + 1;
        }
    }
    printf("%d\n", left);
    printf("%d\n", right);
}
int main()
{
    int arr[] = { 1,2,3,5,6,7,8,9,10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    test(arr, size, 8);
	return 0;
}