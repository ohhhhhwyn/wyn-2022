#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int count = 0;
//	for (int i = 0; i < 100; i++)
//		if (9 == i % 10 || 9 == i / 10)
//			count++;
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	double sum = 0.0;
//	int symbol = -1;
//	for (int i = 1; i <= 100; i++) {
//		symbol *= -1;
//		sum += 1.0 * symbol / i;
//	}
//	printf("%f", sum);
//	return 0;
//}
//#include<limits.h>
//#include<stdio.h>
//int main() {
//	int n;
//	int max = INT_MIN;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &n);
//		if (max < n)
//			max = n;
//	}
//	printf("%d", max);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<Windows.h>
//#include<stdlib.h>
//#include<time.h>
//#include<stdio.h>
//void menu() {
//	printf("***********************\n");
//	printf("**  1.start  0.exit  **\n");
//	printf("***********************\n");
//}
//void game() {
//	srand((unsigned)time(NULL));
//	int ans = rand() % 1997 - 998;
//	int input = 0;
//	int stage = 0;
//	int max_stage = 10;
//	printf("请猜一个范围在（-999，999）的整数。\n\n");
//	do {
//		printf("还剩%d次机会。是多少呢：", max_stage - stage);
//		scanf("%d", &input);
//		stage++;
//		if (ans > input)
//			printf("再大一点。\n");
//		else if (ans > input)
//			printf("再小一点。\n");
//	} while (max_stage>stage&&ans!=input);
//	if(ans!=input)
//		printf("很遗憾，正确答案是%d。\n", ans);
//	else {
//		printf("回答正确。\n");
//		printf("您用了%d次猜中了。\n", stage);
//	}
//}
//int main() {
//	int input = 0;
//	do {
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			system("cls");
//			printf("\n选择错误,请重新输入！\n\n");
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//int searchInsert(int* nums, int numsSize, int target) {
//	int left = 0, right = numsSize - 1;
//	while (left <= right) {
//		int mid = ((right - left) >> 1) + left;
//		if (nums[mid] < target) 
//			left = mid + 1;
//		else if (nums[mid] > target) 
//			right = mid - 1;
//		else 
//			return mid;
//	}
//	return -1;
//}
//int main() {
//	int target;
//	scanf("%d", &target);
//	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int ret = searchInsert(nums, numsSize, target);
//	if (-1 == ret)
//		printf("找不到\n");
//	else 
//		printf("%d", ret);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    int a = 0;
//    int b = 1;
//    if (1 == a)
//        if (0 == b)
//            printf("haha\n");
//        else
//            printf("hehe\n");
//    return 0;
//}
//#include <stdio.h>
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//	case 2:
//		printf("星期二\n");
//	case 3:
//		printf("星期三\n");
//	case 4:
//		printf("星期四\n");
//	case 5:
//		printf("星期五\n");
//	case 6:
//		printf("星期六\n");
//	case 7:
//		printf("星期天\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入星期天数错误\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i = 5;
//	while (5 == i)
//		printf("hello world!\n");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i = 5;
//	while (i > 0) {
//		printf("hello world!\n");
//		i--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i = 5;
//	while (i > 0) {
//		if (3 == i)
//			break;
//		printf("hello world!\n");
//		i--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i = 5;
//	while (i > 0) {
//		i--;
//		if (3 == i)
//			continue;
//		printf("hello world!\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	char arr[] = "hello world!";
//	int len = strlen(arr);
//	while (1) {
//		for (int i = 0; i < len; i++) {
//			putchar(arr[i]);
//			Sleep(500);
//		}
//		for (int i = 0; i < len; i++) {
//			printf("\b \b");
//			Sleep(500);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	char arr[] = "hello world!";
//	int len = strlen(arr);
//	int cnt = 0;
//	while (1) {
//		printf("\r");
//		for (int i = 0; i < len; i++) {
//			if (cnt + i < len)
//				putchar(arr[i + cnt]);
//			else
//				putchar(arr[cnt + i - len]);
//		}
//		fflush(stdout);
//		Sleep(500);
//		//从右向左
//	/*	if (cnt < len - 1)
//			cnt++;
//		else
//			cnt = 0;*/
//		//从左向右
//		if (cnt > 0)
//			cnt--;
//		else
//			cnt = len - 1;
//	}
//	return 0;
//}
//#include<Windows.h>
//#include<time.h>
//#include<stdio.h>
//int main() {
//	clock_t start = clock();
//	for (int i = 1; i < 10; i++) {
//		printf("%*d\n", i, i);
//		Sleep(1000);
//	}
//	clock_t end = clock();
//	printf("%f", (double)(end - start) / CLOCKS_PER_SEC/3600);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	char s[] = "hello world";
// 	int s_len = strlen(s);
//	for (int i = 0; i < s_len; i++) {
//		printf("\r");
//		putchar(s[i]);
//		Sleep(1000);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char s[] = "hello world";
//	int s_len = strlen(s);
//	while (1) {
//
//		for (int i = 0; i < s_len; i++) {
//			putchar(s[i]);
//		}
//		printf("\r");
//		for (int i = 0; i < s_len; i++) {
//			printf(" ");
//		}
//		printf("\r");
//		Sleep(1000);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char s[] = "hello world";
//	int s_len = strlen(s);
//	int cnt = 0;
//	int dir = 1;
//	while (1) {
//		putchar('\r');
//		for (int i = 0; i < s_len; i++) {
//			if (i + cnt < s_len) {
//				putchar(s[i + cnt]);
//			}
//			else {
//				putchar(s[i + cnt - s_len]);
//			}
//		}
//		Sleep(100);
//		if (1 == dir) {
//			if (cnt < s_len - 1)
//				cnt++;
//			else
//				cnt = 0;
//		}
//		else
//		{
//			if (cnt > 0)
//				cnt--;
//			else
//				cnt = s_len - 1;
//		}
//	}
//	return 0;
//}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //#include<stdio.h>
 //#include<string.h>
 //int* plusOne(int* digits, int digitsSize, int* returnSize) {
 //    if (0 == digitsSize) {
 //        digits[0] += 1;
 //        return digits;
 //    }
 //    int count = 0;
 //    *returnSize = digitsSize;
 //    for (int i = digitsSize - 1; i >= 0; i--) {
 //        if (digits[i] != 9) {
 //            digits[i] += 1;
 //            return digits;
 //        }
 //        else {
 //            digits[i] = 0;
 //            *returnSize--;
 //            count++;
 //        }
 //    }
 //    //创建一个数组带有1和0
 //    int* p = (int*)malloc(sizeof(int) * (count + 1));
 //    p[0] = 1;
 //    for (int i = 1; i <= count; i++)
 //        p[i] = 0;
 //    return p;
 //}
 //int main() {
 //    int digits[10] = { 1,2,3,4,5,6,7,8,9,10 };
 //    int* p = plusOne(digits,10,10);
 //    
 //    return 0;
 //}
//void merge() {
//	int nums1[] = { 0 };
//	int nums1Size = 1;
//	int m = 0;
//	int nums2[] = { 1 };
//	int nums2Size = 1;
//	int n = 1;
//
//	int new_nums[10] = { 0 };
//	for (int i = 0, j = 0, k = 0; k < m + n; k++) {
//		if (nums1[i] <= nums2[j] && i < m && j < n) {
//			new_nums[k] = nums1[i];
//			i++;
//		}
//		else if (j >= n) {
//			new_nums[k] = nums1[i];
//			i++;
//		}
//		else if (nums1[i] > nums2[j] && i < m && j < n) {
//			new_nums[k] = nums2[j];
//			j++;
//		}
//		else if (i >= m) {
//			new_nums[k] = nums2[j];
//			j++;
//		}
//	}
//	for (int i = 0; i < m + n; i++)
//		nums1[i] = new_nums[i];
//}
//
//
//#include<stdio.h>
//int main() {
//	merge();
//	return 0;
//}
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int new_nums[999] = { 0 };
	int i = 0, j = 0, k = 0;
	while (i < m || j < n) {
		if (nums1[i] < nums2[j])
			new_nums[k] = nums1[i++];
		else if (j == n)
			new_nums[k] = nums1[i++];
		else if (nums1[i] > nums2[j])
			new_nums[k] = nums2[j++];
		else if (i == m)
			new_nums[k] = nums2[j++];
		k++;
	}
	for (int i = 0; i < m + n; i++)
		nums1[i] = new_nums[i];
}

