#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int func(int n) {
//	if (1 == n)
//		return true;
//	return false;
//}
//int main() {
//
//	return 0;
//}
//int removeDuplicates(int* nums, int numsSize) {
//	if (0 == numsSize)
//		return 0;
//	int fast = 1;
//	int slow = 1;
//	while (fast < numsSize) {
//		if (nums[fast] != nums[fast - 1]) {
//			nums[slow] = nums[fast];
//			slow++;
//		}
//		fast++;
//	}
//	return slow;
//}
//int maxSubArray(int* nums, int numsSize) {
//    int sum = 0;
//    for (int i = 0; i < numsSize; i++) {
//        int tmp = 0;
//        for (int j = i; j < numsSize; j++) {
//            tmp += nums[j];
//            if (0 <= tmp) {
//                sum = tmp;
//            }
//            else {
//                break;
//            }
//        }
//    }
//    return sum;
//}
//int maxSubArray(int* nums, int numsSize) {
//    int max = INT_MIN;
//    int sum = 0;
//    for (int i = 0; i < numsSize; i++) {
//        sum += nums[i];
//        max = max > sum ? max : sum;
//        if (sum < 0) {
//            sum = 0;
//        }
//    }
//    return max;
//}
//#include<time.h>
//#include<stdlib.h>
//#include<stdio.h>
//int main() {
//	srand(time(NULL));
//	int n = rand()%250;
//	printf("%d\n", n);
//	return 0;
//}
//#include<time.h>
//#include<stdlib.h>
//#include<stdio.h>
//int main() {
//	srand(time(NULL));
//	int rand_val = rand() % 7;
//	switch (rand_val) {
//	case 0:printf("大吉\n"); break;
//	case 1:printf("中吉\n"); break;
//	case 2:printf("小吉\n"); break;
//	case 3:printf("吉\n"); break;
//	case 4:printf("末吉\n"); break;
//	case 5:printf("凶\n"); break;
//	case 6:printf("大凶\n"); break;
//	default:break;
//	}
//	return 0;
//}
//#include<time.h>
//#include<stdlib.h>
//#include<stdio.h>
//int main() {
//	srand(time(NULL));
//	int rand_val = rand() % 11;
//	if (0 <= rand_val && rand_val <= 1)
//		printf("大吉\n");
//	else if (2 <= rand_val && rand_val <= 3)
//		printf("中吉\n");
//	else if (4 <= rand_val && rand_val <= 5)
//		printf("小吉\n");
//	else if (6 <= rand_val && rand_val <= 7)
//		printf("吉\n");
//	else if (8==rand_val )
//		printf("末吉\n");
//	else if (9 == rand_val)
//		printf("凶\n");
//	else if (10 == rand_val)
//		printf("大凶\n");
//	return 0;
//}
//#include<time.h>
//#include<stdlib.h>
//#include<stdio.h>
//#define MAX_STAGE 10
//int main() {
//	srand((unsigned)time(NULL));
//	int ans = rand()%1997-998;
//	int no;
//	int num[MAX_STAGE];
//	int stage = 0;
//	printf("请猜一个范围在（-999，999）的整数。\n\n");
//	do {
//		printf("还剩%d次机会。是多少呢：", MAX_STAGE - stage);
//		scanf("%d", &no);
//		num[stage++] = no;
//		if (ans > no)
//			printf("\a再大一点。\n");
//		else if (ans < no)
//			printf("\a再小一点。\n");
//	} while (stage<MAX_STAGE&&ans!=no);
//	if (ans != no)
//		printf("\a很遗憾，正确答案是%d。\n", ans);
//	else {
//		printf("回答正确。\n");
//		printf("您用了%d次猜中了。\n", stage);
//	}
//	puts("\n--- 输入记录 ---\n");
//	for (int i = 0; i < stage; i++)
//		printf("%2d : %d \n", i + 1, num[i]);
//	return 0;
//}
//#include<time.h>
//#include<stdlib.h>
//#include<stdio.h>
//#define MAX_STAGE 10
//int main() {
//	srand((unsigned)time(NULL));
//	int ans = (1+rand() % 333)*3;
//	int no;
//	int num[MAX_STAGE];
//	int stage = 0;
//	printf("请猜一个范围在[3，999]的整数。\n\n");
//	do {
//		printf("还剩%d次机会。是多少呢：", MAX_STAGE - stage);
//		scanf("%d", &no);
//		if (0 != no % 3) {
//			//continue;
//			printf("输入错误，游戏结束\n");
//			return 0;
//		}
//		num[stage++] = no;
//		if (ans > no)
//			printf("\a再大一点。\n");
//		else if (ans < no)
//			printf("\a再小一点。\n");
//	} while (stage < MAX_STAGE && ans != no);
//	if (ans != no)
//		printf("\a很遗憾，正确答案是%d。\n", ans);
//	else {
//		printf("回答正确。\n");
//		printf("您用了%d次猜中了。\n", stage);
//	}
//	puts("\n--- 输入记录 ---\n");
//	for (int i = 0; i < stage; i++)
//		printf("%2d : %d \n", i + 1, num[i]);
//	return 0;
//}
//#include<windows.h>
//#include<stdio.h>
//int main() {
//	printf("ABCDEFG");
//	for (int i = 0; i < 7; i++) {
//		Sleep(100);
//		printf("\b \b");
//		fflush(stdout);
//	}
//	return 0;
//}
//#include<windows.h>
//#include<stdio.h>
//int main() {
//	printf("ABCDEFG");
//	Sleep(1000);
//	fflush(stdout);
//	printf("\r12345");
//	Sleep(1000);
//	fflush(stdout);
//	printf("\rab");
//	Sleep(1000);
//	fflush(stdout);
//	return 0;
//}
//#include<time.h>
//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	for (int i = 10; i > 0; i--) {
//		printf("\r%2d", i);
//		Sleep(1000);
//		fflush(stdout);
//	}
//	printf("\r\aFIRE\n");
//	printf("程序开始运行后经过了%f秒。\n", (double)clock() / CLOCKS_PER_SEC);
//	return 0;
//}
#include<time.h>
#include<Windows.h>
#include<stdio.h>
int main() {
	for (int i = 1; i <= 10; i++) {
		Sleep(100);
	}
	int start = clock();
	for (int i = 1; i <= 10; i++) {
		printf("%2d", i);
		Sleep(1000);
	}
	int end = clock();
	printf("计算用了%f秒。\n", ((double)end - (double)start) / CLOCKS_PER_SEC);
	printf("程序开始运行后经过了%f秒。\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}

