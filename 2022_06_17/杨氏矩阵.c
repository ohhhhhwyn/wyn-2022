#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
int func(int arr[3][3], int rowSize, int colSize, int target) {
	int row = 0;
	int col = colSize - 1;
	while (row < rowSize && col >= 0) {
		if (target < arr[row][col]) {
			col--;
		}
		else if (target > arr[row][col]) {
			row++;
		}
		else {
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int rowSize = sizeof(arr) / sizeof(arr[0]);
	int colSize = sizeof(arr[0]) / sizeof(arr[0][0]);
	if (func(arr, rowSize, colSize, 5)) {
		printf("存在\n");
	}
	else {
		printf("不存在\n");
	}
	system("pause");
	return 0;
}