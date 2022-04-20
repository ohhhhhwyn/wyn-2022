#include<stdio.h>
int main() {
	int m, n, i, j;
	int arr1[9][9] = { 0 };
	int arr2[9][9] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr1[i][j]);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr2[i][j]);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			if (arr1[i][j] != arr2[i][j]) {
				break;
			}
		}
	if (i == m && j == n)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}