#include<stdio.h>
int main() {
	int m, n, i, j, k = 0;
	int arr[100] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m * n; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++, k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
	return 0;
}