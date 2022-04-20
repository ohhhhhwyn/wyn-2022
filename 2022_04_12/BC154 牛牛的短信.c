#include<stdio.h>
int main() {
	int n;
	int num[10] = { 0 };
	double sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < n; i++) {
		if (num[i] > 60)
			sum += 0.2;
		else
			sum += 0.1;
	}
	printf("%.1lf", sum);
	return 0;
}