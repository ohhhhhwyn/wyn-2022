#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int thirdMax(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        int flag = 1;
        for (int j = 0; j < numsSize - 1 - i; j++) {
            if (nums[j] < nums[j + 1]) {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
                flag = 0;
            }
        }
        if (1 == flag) {
            break;
        }
    }
    if (numsSize >= 3) {
        int count = 0;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] != nums[i + 1]) {
                count++;
            }
            if (2 == count) {
                return nums[i + 1];
            }
        }
    }
    return nums[0];
}
int main()
{
	int arr[] = { 2,2,3,1 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int ret = thirdMax(arr, arrSize);
	printf("%d\n", ret);
	system("pause");
	return 0;
}