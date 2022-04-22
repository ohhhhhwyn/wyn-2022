#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	print(n);
	return 0;
}