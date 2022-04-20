#include<stdio.h>
int main() {
	int m,n,i,j,sum=0;
	int arr[10][10] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > 0)
				sum += arr[i][j];
		}
	printf("%d", sum);
	return 0;
}