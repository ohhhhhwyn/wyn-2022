#include<stdio.h>
int main() {
	int m, n, i, j;
	int row,col;
	int max = 0;
	int arr[10][10] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j]) {
				max = arr[i][j];
				row = i+1;
				col = j+1;
			}
		}
	}
	printf("%d %d", row, col);
	return 0;
}