#include<stdio.h>
int arr[1000][1000] = { 1 };
int main() {
	int n ;
	scanf("%d", &n);
	int count = 1, pos = 1;
	int i = 0, j = 0;
	while (count <= n * n) {
		if (i == 0 && j < n-1 && pos == 1) {
			arr[i][++j] = ++count;
			pos = -1;
		}
		else if (j == 0 && i < n-1 && pos == -1) {
			arr[++i][j] = ++count;
			pos = 1;
		}
		else if (i == n - 1 && pos == -1) {
			arr[i][++j] = ++count;
			pos = 1;
		}
		else if (j == n - 1 && pos == 1) {
			arr[++i][j] = ++count;
			pos = -1;
		}
		else if (pos == 1)
			arr[--i][++j] = ++count;
		else if (pos == -1)
			arr[++i][--j] = ++count;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}