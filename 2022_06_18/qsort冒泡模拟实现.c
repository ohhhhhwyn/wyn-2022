#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
int compare(const void* elem1, const void* elem2) {
	return *(int*)elem1 > *(int*)elem2;
}
void swap(char* elem1, char* elem2, size_t width) {
	for (int i = 0; i < width; i++) {
		char tmp = *elem1;
		*elem1++ = *elem2;
		*elem2++ = tmp;
	}
}
void bsort(void* base, size_t num, size_t width, int(* compare)(const void* elem1, const void* elem2)) {
	for (int i = 0; i < num - 1; i++) {
		int flag = 1;
		for (int j = 0; j < num - 1 - i; j++) {
			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag) {
			break;
		}
	}
}
int main()
{
	int arr[] = { 1,8,3,5,4,9,7,6,2,0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	printf("before:");
	for (int i = 0; i < arrSize; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	bsort(arr, arrSize, sizeof(int), compare);
	printf(" after:");
	for (int i = 0; i < arrSize; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}