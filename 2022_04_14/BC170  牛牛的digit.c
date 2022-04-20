int digit(int x, int i) {
	int product = 1;
	for (int j = 0; j < i; j++) {
		product *= 10;
	}
	return x%product;
}
#include<stdio.h>
int main() {
	int x,i;
	scanf("%d %d", &x,&i);
	printf("%d", digit(x, i));
	return 0;
}