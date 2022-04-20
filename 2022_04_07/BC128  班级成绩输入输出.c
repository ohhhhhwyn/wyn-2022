#include<stdio.h>
int main() {
	float arr[5][5] = { 0 };
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			scanf("%f", &arr[i][j]);
	}
	for (i = 0; i < 5; i++) {
		float sum = 0;
		for (j = 0; j < 5; j++) {
			sum += arr[i][j];
			printf("%.1f ", arr[i][j]);
		}
		printf("%.1f\n", sum);
	}
	return 0;
}