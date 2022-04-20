#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int a[30] = { 0 };
//	a[0] = 0;
//	a[1] = 1;
//	a[2] = 2;
//	int n;
//	scanf("%d", &n);
//	for (int i = 3; i < n; i++)
//		a[i] = a[i - 1] + a[i - 2];
//	printf("%d", a[n]);
//	return 0;
//}
//long long factorial(int n) {
//	if (1 == n)
//		return 1;
//	return n*factorial(n - 1);
//}
//#include<stdio.h>
//int main() {
//	long long n;
//	scanf("%lld", &n);
//	printf("%lld", factorial(n));
//	return 0;
//}
//int Add(int n) {
//	if (1 == n)
//		return 1;
//	return n + Add(n - 1);
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d", Add(n));
//	return 0;
//}
//int Ackmann(int n, int m) {
//	if (0 == m)
//		return n + 1;
//	else if (m > 0 && 0 == n)
//		return Ackmann(m, 1);
//	else (m > 0 && n > 0)
//		return Ackmann(m - 1, Ackmann(m, n - 1));
//}
//#include<stdio.h>
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	printf("%d", Ackmann(n, m));
//	return 0;
//}
//int digit(int x, int i) {
//	int product = 1;
//	for (int j = 0; j < i; j++) {
//		product *= 10;
//	}
//	return x%product;
//}
//#include<stdio.h>
//int main() {
//	int x,i;
//	scanf("%d %d", &x,&i);
//	printf("%d", digit(x, i));
//	return 0;
//}
//int h(int n,int x) {
//	if (0 == n)
//		return 1;
//	else if (1 == n)
//		return 2 * n;
//	else 
//		return 2 * x * h(n - 1, x) - 2 * (n - 1) * h(n - 2, x);
//}
//#include<stdio.h>
//int main() {
//	int n, x;
//	scanf("%d %d", &n, &x);
//	printf("%d", h(n,x));
//	return 0;
//}
//int A(int n, int m) {
//	if (0 == m)
//		return 1;
//	else if (1 == m)
//		return n;
//	return (n - m + 1) * A(n, m - 1);
//}
//#include<stdio.h>
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	printf("%d", A(n, m));
//	return 0;
//}
//void func(int n) {
//	if (n < 10)
//		printf("%d", n);
//	else {
//		printf("%d", n % 10);
//		func(n / 10);
//	}
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	func(n);
//	return 0;
//}
//int Ackmann(int n, int m) {
//	int a;
//	if (0 == m)
//		a = n + 1;
//	else if (m > 0 && 0 == n)
//		a = Ackmann(m, 1);
//	else if (m > 0 && n > 0)
//		a = Ackmann(m - 1, Ackmann(m, n - 1));
//	return a;
//}
//#include<stdio.h>
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	printf("%d", Ackmann(n, m));
//	return 0;
//}
//#include<stdio.h>
//int f[100] = { 0 };
//int main() {
//	f[0] = 0;
//	f[1] = 1;
//	int t;
//	scanf("%d", &t);
//	for (int j = 0; j < t;j++) {
//		int n;
//		scanf("%d", &n);
//		for (int i = 0; i <= n; i++) {
//			f[i] = f[i / 2] + f[i % 2];
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int IsPalindrome(int num) {
//	int arr[100] = { 0 };
//	int k = 0;
//	while (num) {
//		arr[k] = num % 10;
//		num /= 10;
//		k++;
//	}
//	int i, j;
//	for (i = 0, j = k - 1; i <= ((k - 1) / 2); i++, j--)
//		if (arr[i] != arr[j])
//			break;
//	if (i >= (k / 2))
//		return 1;
//	else
//		return 0;
//}
//int Reverse(int num) {
//	int sum = 0;
//	while (num) {
//		sum = sum * 10 + num % 10;
//		num /= 10;
//	}
//	return sum;
//}
//int Add(int n, int num1, int num2) {
//	int arr[10] = { 0 };
//	int i = 0;
//	while (0 != num1 || 0 != num2) {
//		if (num1 % 10 + num2 % 10 < n) {
//			arr[i] = num1 % 10 + num2 % 10;
//			num1 /= 10;
//			num2 /= 10;
//		}
//		else {
//			arr[i] = num1 % 10 + num2 % 10 - n;
//			num1 /= 10;
//			num2 /= 10;
//			num1 += 1;
//		}
//		i++;
//	}
//	int sum = 0;
//	while (i--)
//		sum = sum * 10 + arr[i];
//	return sum;
//}
//int main() {
//	int n, num;
//	scanf("%d %d", &n, &num);
//	int count = 0;
//	int new_num = num;
//	while (1) {
//		count++;
//		num = new_num;
//		int rev = Reverse(num);
//		int add = Add(n, num, rev);
//		int pos = IsPalindrome(add);
//		if (1 == pos)
//			break;
//		new_num = add;
//	}
//	printf("STEP=%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//#define MAX(a,b) ((a)>(b)?(a):(b))
//int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
//    int maxWealth = 0;
//    for (int i = 0; i < accountsColSize; i++) {
//        int sum = 0;
//        for (int j = 0; j < accountsColSize[0]; j++) {
//            sum += accounts[i][j];
//        }
//        maxWealth = MAX(maxWealth, sum);
//    }
//    return maxWealth;
//}
//int func(int arr[3][3],int a,int s[3]) {
//
//}
//int main() {
//    int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//    maximumWealth(&arr, 3, arr);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                returnSize = (int*)malloc(sizeof(int) * 2);
                returnSize[0] = i;
                returnSize[1] = j;
                return returnSize;
            }
        }
    }
    return NULL;
}
int main() {
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int* p = twoSum(arr,10,15,NULL);
    printf("%d %d", *p, *(p + 1));
    return 0;
}


//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//int* p = NULL;
//p = arr;

