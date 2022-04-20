
#include<stdio.h>
void Multiplication_table(int num) {
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++)
			printf("%2d*%2d=%3d  ", i + 1, j + 1, (i + 1) * (j + 1));
		printf("\n");
	}
}
int main() {
	int num;
	scanf("%d", &num);
	Multiplication_table(num);
	return 0;
}