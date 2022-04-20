#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
//int main() {
//	int prices[] = { 7,1,5,3,6,4 };
//	int pricesSize = 6;
//	int max = INT_MIN, min = INT_MAX;
//	for (int i = 1; i < pricesSize; i++) {
//		if (min > prices[i - 1]) {
//			min = prices[i - 1];
//		}
//		if (min < prices[i] && max < (prices[i] - min)) {
//			max = prices[i] - min;
//		}
//	}
//	if (max > 0)
//		printf("%d", max);
//	else
//		return 0;
//
//}
//int main() {
//	int nums[] = { 4,1,2,1,2 };
//	int numsSize = 5;
//	//方法一，暴力法
//	int i, j, ret;
//	for (i = 0; i < numsSize; i++) {
//		for (j = 0; j < numsSize; j++) {
//			if (nums[i] == nums[j] && j != i)
//				break;
//		}
//		if (j == numsSize)
//			ret = nums[i];
//	}
//	printf("%d", ret);
//	return 0;
//}
//int main() {
//    int nums[] = { 6,5,5};
//    int numsSize = 3;
//    ////方法一，暴力算法
//    //int max = INT_MIN;
//    //int ret;
//    //for (int i = 0; i < numsSize; i++) {
//    //    int count = 0;
//    //    for (int j = 0; j < numsSize; j++) {
//    //        if (nums[i] == nums[j] && i != j) {
//    //            count++;
//    //        }
//    //        if (max < count) {
//    //            max = count;
//    //            ret = nums[i];
//    //        }
//    //    }
//    //}
//    //printf("%d",ret);
//
//
//    for (int i = 0; i < numsSize - 1; i++) {
//        int MinIndex = i;
//        for (int j = i + 1; j < numsSize; j++) {
//            if (nums[MinIndex] > nums[j])
//                MinIndex = j;
//        }
//        int tmp = nums[MinIndex];
//        nums[MinIndex] = nums[i];
//        nums[i] = tmp;
//    }
//
//
//
//
//    return 0;
//}
//int main() {
//	int nums[] = { 1,3,2,4,2,3,4,4,3,4 };
//	int numsSize = 10;
//	for (int i = 0; i < numsSize - 1; i++) {
//		int MinIndex = i;
//		for (int j = i + 1; j < numsSize; j++) {
//			if (nums[MinIndex] > nums[j])
//				MinIndex = j;
//		}
//		int tmp = nums[MinIndex];
//		nums[MinIndex] = nums[i];
//		nums[i] = tmp;
//	}
//	printf("%d", nums[numsSize / 2]);
//	return 0;
//}
//void QuickSort(int* nums, int left, int right) {
//	if (left > right)
//		return;
//	int tmp = nums[left];
//	int i = left, j = right;
//	while (i != j) {
//		while (tmp <= nums[j] && i < j)
//			j--;
//		while (tmp >= nums[i] && i < j)
//			i++;
//		if (i < j) {
//			int new_tmp = nums[i];
//			nums[i] = nums[j];
//			nums[j] = new_tmp;
//		}
//	}
//	nums[left] = nums[i];
//	nums[i] = tmp;
//	QuickSort(nums, left, i - 1);
//	QuickSort(nums, j + 1, right);
//}
//void QuickSort(int* nums, int left, int right) {
//	if (left > right)
//		return;
//	int tmp = nums[left];
//	int i = left, j = right;
//	while (i != j) {
//		while (tmp >= nums[j] && i < j)
//			j--;
//		while (tmp <= nums[i] && i < j)
//			i++;
//		if (i < j) {
//			int new_tmp = nums[i];
//			nums[i] = nums[j];
//			nums[j] = new_tmp;
//		}
//	}
//	nums[left] = nums[i];
//	nums[i] = tmp;
//	QuickSort(nums, left, i - 1);
//	QuickSort(nums, j + 1, right);
//}
//#include<stdio.h>
//int main() {
//	int arr[] = { 1,4,9,46,8,4,9,5,9,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	QuickSort(arr, 0, sz - 1);
//	/*for (int i = 0; i < sz - 1; i++) {
//		int isSorted = 1;
//		for (int j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] < arr[j+1]) {
//				isSorted = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//		if (isSorted)
//			break;
//	}*/
//	/*for (int i = 0; i < sz - 1; i++) {
//		for (int j = i + 1; j < sz; j++) {
//			if (arr[i] < arr[j]) {
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}*/
//	/*for (int i = 0; i < sz - 1; i++) {
//		int MinIndex = i;
//		for (int j = i + 1; j < sz; j++) {
//			if (arr[MinIndex] > arr[j]) {
//				MinIndex = j;
//			}
//		}
//		int tmp = arr[MinIndex];
//		arr[MinIndex] = arr[i];
//		arr[i] = tmp;
//	}*/
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void main(void) {
//    int nums[] = { 1,0,1,0,1,0,1,0 };
//    int numsSize =8;
//    for (int i = 0; i < numsSize; i++) {
//        int j = i;
//        if (0 == nums[j]) {
//            while (j < numsSize - 1) {
//                int tmp = nums[j];
//                nums[j] = nums[j + 1];
//                nums[j + 1] = tmp;
//                j++;
//            }
//        }
//    }
//}
//#include<stdio.h>
//int Add(int a, int b) {
//	return a + b;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
//#include<string.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<stdio.h>
//int** Multiplication_table(int num) {
//	int** ret = malloc(sizeof(int*) * num);
//	if (ret == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		for (int i = 0; i < num; i++) {
//			ret[i] = malloc(sizeof(int) * (i + 1));
//			if (ret == NULL) {
//				printf("%s\n", strerror(errno));
//			}
//			else {
//				for (int j = 0; j <= i; j++) {
//					ret[i][j] = (i + 1) * (j + 1);
//				}
//			}
//		}
//	}
//	return ret;
//}
//int main() {
//	int num;
//	scanf("%d", &num);
//	int** p = Multiplication_table(num);
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j <= i; j++) {
//			printf("%d  ", p[i][j]);
//		}
//		printf("\n");
//	}
//	free(p);
//	return 0;
//}
//void Multiplication_table(int num) {
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j <= i; j++)
//			printf("%2d*%2d=%3d  ", i + 1, j + 1, (i + 1) * (j + 1));
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main() {
//	int num;
//	scanf("%d", &num);
//	Multiplication_table(num);
//	return 0;
//}

#include<stdio.h>
void reserve(int* nums, int left, int right) {
    while (left <= right) {
        int tmp = nums[left];
        nums[left++] = nums[right];
        nums[right--] = tmp;
    }
}
int main() {
    int nums[] = { 1,2,3,4,5,6,7 };
    int numsSize = 7;
    int k = 3;
    /*
    reserve(nums, 0, k);
    reserve(nums, k + 1, numsSize - 1);
    reserve(nums, 0, numsSize - 1);
    */
    reserve(nums, 0, numsSize - 1);
    reserve(nums, 0, k - 1);
    reserve(nums, k, numsSize - 1);
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
	return 0;
}