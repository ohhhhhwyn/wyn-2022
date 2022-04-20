#include<stdio.h>
int main() {
	int n, i, j;
	int arr[10][10] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
	for (i = 1; i < n; i++)
		for (j = 0; j < i; j++) {
			if (arr[i][j] != 0)
				break;
		}
	if (i == n && j == n - 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}