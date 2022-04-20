#include<stdio.h>
int main() {
	int count = 0;
	for (int i = 0; i < 100; i++)
		if (9 == i % 10 || 9 == i / 10)
			count++;
	printf("%d\n", count);
	return 0;
}
