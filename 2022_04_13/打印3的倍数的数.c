#include<stdio.h>
int main() {
	int i = 1;
	while (i<=100) {
		if (0 == i % 3)
			printf("%d ", i);
		i++;
	}
	return 0;
}