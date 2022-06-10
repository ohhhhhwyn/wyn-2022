#include <stdio.h>
void print(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		printf("%d ", *(nums + i));
	}
	printf("\n");
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	print(arr, arrSize);
	return 0;
}