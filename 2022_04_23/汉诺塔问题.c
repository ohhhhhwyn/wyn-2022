#include<stdio.h>
int m = 0;
void hanoi(int n, char A, char B, char C)
{
	m++;
	if (1 == n)
	{
		printf("编号为[%d]的圆盘：%c -> %c\n", n, A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("编号为[%d]的圆盘：%c -> %c\n", n, A, C);
		hanoi(n - 1, B, A, C);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("总移动次数：%d\n", m);
	return 0;
}