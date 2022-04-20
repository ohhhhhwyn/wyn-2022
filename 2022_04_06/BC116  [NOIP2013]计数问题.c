#include<stdio.h>
int main()
{
	int a, b, count = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		for (int j = i; j > 0; j /= 10) {
			if (j % 10 == b)
				count++;
		}
	}
	printf("%d", count);
	return 0;
}
