#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
int main()
{
	int row = 5;
	int arr[5][5] = {0};
	for (int i = 0; i < row; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				printf("%d ", 1);
				arr[i][j] = 1;
			}
			else {
				printf("%d ", arr[i - 1][j - 1] + arr[i - 1][j]);
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}