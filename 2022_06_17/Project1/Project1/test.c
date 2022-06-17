//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//int func(int arr[3][3], int rowSize, int colSize, int target) {
//	int row = 0;
//	int col = colSize - 1;
//	while (row < rowSize && col >= 0) {
//		if (target < arr[row][col]) {
//			col--;
//		}
//		else if (target > arr[row][col]) {
//			row++;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int rowSize = sizeof(arr) / sizeof(arr[0]);
//	int colSize = sizeof(arr[0]) / sizeof(arr[0][0]);
//	if (func(arr, rowSize, colSize, 5)) {
//		printf("´æÔÚ\n");
//	}
//	else {
//		printf("²»´æÔÚ\n");
//	}
//	system("pause");
//	return 0;
//}
#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
void reverse(char* str, int left, int right) {
	while(left < right) {
		char tmp = str[left];
		str[left++] = str[right];
		str[right--] = tmp;
	}
}
void func(char* str, int k) {
	int len = (int)strlen(str);
	k %= len;
	reverse(str, 0, k - 1);
	reverse(str, k, len - 1);
	reverse(str, 0, len - 1);
}
int main()
{
	char str[] = "ABCD";
	printf("before: %s\n", str);
	func(str, 3);
	printf(" after: %s\n", str);
	system("pause");
	return 0;
}