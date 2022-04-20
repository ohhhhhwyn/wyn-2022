#include<stdio.h>
int main() {
	int m, n, i, j;
	int arr[10][10] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
	for (j = 0; j < n; j++){
		for (i = 0; i < m; i++)
			printf("%d ", arr[i][j]);
        printf("\n");
    }
	return 0;
}