#include <stdio.h>
int Sum(int a) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += a;
		a = a * 10 + 2;
	}
	return sum;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", Sum(a));
	return 0;
}