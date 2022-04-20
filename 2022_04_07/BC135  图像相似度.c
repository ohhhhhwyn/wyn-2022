#include<stdio.h>
int main() {
	int m, n, i, j;
	int count = 0;
	int arr1[100][100] = { 0 };
	int arr2[100][100] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr1[i][j]);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			scanf("%d", &arr2[i][j]);
			if (arr1[i][j] == arr2[i][j])
				count++;
		}
	printf("%.2f",(float)count*100/(m*n));
	return 0;
}