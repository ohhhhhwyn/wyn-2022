#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	int mid = a + b + c - max - min;
	printf("%d %d %d", max, mid, min);
	return 0;
}