#include<stdio.h>
int main() {
	int i = 1000;
	while (i <= 2000) {
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			printf("%d ", i);
		i += 4;
	}
	return 0;
}