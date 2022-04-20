#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	char s[] = "hello world";
//	int s_len = strlen(s);
//	for (int i = 0; i < s_len; i++) {
//		printf("\r");
//		putchar(s[i]);
//		Sleep(1000);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//begin:
//	printf("hello world\n");
//	printf("hello\n");
//	goto begin;
//	return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
//	int** ret = malloc(sizeof(int*) * numRows);
//	*returnSize = numRows;
//	*returnColumnSizes = malloc(sizeof(int) * numRows);
//	for (int i = 0; i < numRows; ++i) {
//		ret[i] = malloc(sizeof(int) * (i + 1));
//		(*returnColumnSizes)[i] = i + 1;
//		ret[i][0] = ret[i][i] = 1;
//		for (int j = 1; j < i; ++j) {
//			ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
//		}
//	}
//	return ret;
//}
//
//
//
//
//
//




#include<stdlib.h>
#include<stdio.h>
int main() {
	int arr[10][10] = { 0 };
	int** returnColumnSizes = arr;
	*returnColumnSizes = malloc(sizeof(int) * 5);
	(*returnColumnSizes)[0] = 10;
	(*returnColumnSizes)[1] = 20;
	(*returnColumnSizes)[2] = 30;
	return 0;
}


int* getRow(int rowIndex, int* returnSize) {
	*returnSize = rowIndex + 1;
	int* row = malloc(sizeof(int) * (*returnSize));
	row[0] = 1;
	for (int i = 1; i <= rowIndex; ++i) {
		row[i] = 1LL * row[i - 1] * (rowIndex - i + 1) / i;
	}
	return row;
}

