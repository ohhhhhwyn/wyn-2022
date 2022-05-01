#include<stdio.h>
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("Before:%d %d\n", a, b);
	Swap(&a, &b);
	printf("After:%d %d\n", a, b);
	return 0;
}