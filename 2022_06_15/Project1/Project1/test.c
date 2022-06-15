//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str) {
//	assert(str != NULL);
//	int ans = 0;
//	while (*str != NULL) {
//		ans++;
//		str++;
//	}
//	return ans;
//}
//int main()
//{
//	char* str = "hello world!";
//	printf("%d\n", my_strlen(str));
//	system("pause");
//	return 0;
//}
//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* destination, const char* source) {
//	assert(destination != NULL);
//	assert(source != NULL);
//	char* ans = destination;
//	while (*destination++ = *source++) {
//		;
//	}
//	return ans;
//}
//int main()
//{
//	char* source = "hello world!";
//	char destination[20];
//	printf("%s\n", my_strcpy(destination, source));
//	system("pause");
//	return 0;
//}
#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
void Odd_in_even_before(int arr[], int arrSize) {
	int left = 0;
	int right = arrSize - 1;
	while (left < right) {
		while (left < right && arr[left] % 2 != 0) {
			left++;
		}
		while (left < right && arr[right] % 2 == 0) {
			right--;
		}
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	printf("before:");
	for (int i = 0; i < arrSize; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	Odd_in_even_before(arr, arrSize);
	printf("after:");
	for (int i = 0; i < arrSize; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}