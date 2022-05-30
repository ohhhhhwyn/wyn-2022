#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdbool.h>
/*
void reserve(char* str, int left, int right) {
	while (left < right) {
		int tmp = str[left];
		str[left++] = str[right];
		str[right--] = tmp;
	}
}
void rotate(char* str, int len, int k) {
	k %= len;
	reserve(str, 0, k - 1);
	reserve(str, k, len - 1);
	reserve(str, 0, len - 1);
}
int main() 
{
	char str[] = "ABCD";
	int len = strlen(str);
	int k = 0;
	printf("ÊäÈëÐý×ª×Ö·ûÊý£º>");
	scanf("%d", &k);
	rotate(str, len, k);
	printf("%s\n", str);
	system("pause");
	return 0;
}
*/
bool binarySearchRow(int* row, int rowSize, int target) {
    int left = 0, right = rowSize - 1;
    while (left <= right) {
        int mid = left + ((right - left) >> 1);
        if (target < row[mid]) {
            right = mid - 1;
        }
        else if (target > row[mid]) {
            left = mid + 1;
        }
        else {
            return true;
        }
    }
    return false;
}
int binarySearchCol(int** matrix, int matrixSize, int target) {
    int up = 0, down = matrixSize - 1;
    while (up <= down) {
        int mid = up + ((down - up) >> 1);
        if (target < matrix[mid][0]) {
            down = mid - 1;
        }
        else {
            up = mid + 1;
        }
    }
    return down;
}
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int rowIndex = binarySearchCol(matrix, matrixSize, target);
    if (rowIndex < 0) {
        return false;
    }
    return binarySearchRow(matrix[rowIndex], matrixColSize[rowIndex], target);
}
int main()
{

    return 0;
}