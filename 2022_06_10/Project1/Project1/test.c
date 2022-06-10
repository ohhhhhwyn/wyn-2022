#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void print(int* nums, int numsSize) {
//	for (int i = 0; i < numsSize; i++) {
//		printf("%d ", *(nums + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	print(arr, arrSize);
//	return 0;
//}
//#include <stdio.h>
//int Sum(int a) {
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		sum += a;
//		a = a * 10 + 2;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", Sum(a));
//	return 0;
//}
//#include <stdio.h>
//int	my_pow(int n, int power) {
//	int ans = 1;
//	for (int i = 0; i < power; i++) {
//		ans *= n;
//	}
//	return ans;
//}
//int Daffodil_number(int n) {
//	int power = 0;
//	int tmp = n;
//	while (tmp) {
//		tmp /= 10;
//		power++;
//	}
//	int ans = 0;
//	tmp = n;
//	for (int i = 0; i < power; i++) {
//		ans += my_pow(tmp % 10, power);
//		tmp /= 10;
//	}
//	if (ans == n) {
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 100000; i++) {
//		if (Daffodil_number(i)) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * (i + 1) - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * (n - i) - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}