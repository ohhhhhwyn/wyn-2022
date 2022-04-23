#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int m = 0;
//void hanoi(int n, char A, char B, char C)
//{
//	m++;
//	if (1 == n)
//	{
//		printf("编号为[%d]的圆盘：%c -> %c\n", n, A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("编号为[%d]的圆盘：%c -> %c\n", n, A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	printf("总移动次数：%d\n", m);
//	return 0;
//}
//#include<stdio.h>
//int D_jump_floor(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return D_jump_floor(n - 2) + D_jump_floor(n - 1);
//	}
//}
//int jump_floor(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (n > 1)
//	{
//		c = a + b;
//		b = c;
//		a = b;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = D_jump_floor(n);
//	printf("%d\n", ret1);
//	int ret2 = D_jump_floor(n);
//	printf("%d\n", ret2);
//	return 0;
//}