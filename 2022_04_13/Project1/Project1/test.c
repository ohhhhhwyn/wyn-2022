#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b && a >= c) 
//		printf("%d %d %d", a,(b>c?b:c),(b<c?b:c));
//	if (b >= a && b >= c) 
//		printf("%d %d %d", b,(a>c?a:c),(a<c?a:c));
//	if (c >= a && c >= b) 
//		printf("%d %d %d", c,(a>b?a:b),(a<b?a:b));
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i = 1;
//	while (i<=100) {
//		if (0 == i % 3)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int m, n;
//	scanf("%d %d", &m, &n);
//	if (m % n == 0 || n % m == 0) {
//		printf("%d\n", m < n ? m : n);
//		return 0;
//	}
//	int max = 0;
//	int i = 2;
//	while (i < (m < n ? m : n)) {
//		if (m % i == 0 && n % i == 0)
//			max = i;
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i = 1000;
//	while (i <= 2000) {
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//		i += 4;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int IsPrime(int num) {
//	if (num > 1 && num <= 3)
//		return 1;
//	if (num % 6 != 1 && num % 6 != 5)
//		return 0;
//	for (int i = 5; i <= sqrt(num); i += 6) {
//		if (num % i == 0 || num % (i + 2) == 0)
//			return 0;
//	}
//	return 1;
//}
//int main() {
//	int i = 100;
//	while (i <= 200) {
//		if (IsPrime(i))
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a = 10;
//	单分支
//	if (10 == a)
//		printf("单分支\n");
//	双分支
//	if (5 == a)
//		printf("表达式为真时，打印\n");
//	else
//		printf("表达式为假时，打印\n");
//	多分支
//	if (5 == a)
//		printf("表达式一为真时，打印\n");
//	else if (5 == a)
//		printf("表达式二为真时，打印\n");
//	else
//		printf("以上表达式都为假时，打印\n");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 1;
//	if (1 == a) {
//		if (0 == b) {
//			printf("haha\n");
//		}
//		else {
//			printf("hehe\n");
//		}
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
//    int a = 0;
//    int b = 1;
//    if (1 == a)
//        if (0 == b)
//            printf("haha\n");
//        else
//            printf("hehe\n");
//    return 0;
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
//int main() {
//	int a = 0;
//	int b = 1;
//	if (1 == a)
//		if (0 == b)
//			printf("1");
//		else if (5 == b)
//			printf("2");
//		else
//			printf("3");
//	return 0;
//}
//int func(int num) {
//	int tmp = num;
//	while (tmp) {
//		num = num * 10 + tmp % 10;
//		tmp /= 10;
//	}
//	return num;
//}
//int IsPalindrome(int num) {
//	int arr[10] = { 0 };
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
//	if (i == (k / 2))
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
//	int arr[15] = { 0 };
//	int i = 0;
//	while (0!=num1&&0!=num2) {
//		if ((num1 % n + num2 % n) < n) {
//			arr[i] += num1 % n + num2 % n;
//			num1 /= n;
//			num2 /= n;
//		}
//		else {
//			arr[i] += (num1 % n + num2 % n) % n;
//			num1 /= n;
//			num2 /= n;
//			num1 += 1;
//		}
//		i++;
//	}
//}
//#include<stdio.h>
//int main() {
//	int N, M;
//	scanf("%d %d", &N, &M);
//	int count = 0;
//	while (1) {
//		count++;
//		if (IsPalindrome(Add(N, M, Reverse(M)))) {
//			printf("%d", count);
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[10] = { 0 };
//	int i;
//	int max = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < n; i++)
//		if ((int)sqrt(a[i]) != sqrt(a[i]))
//			if (max <= a[i])
//				max = a[i];
//	printf("%d\n", max);
//	return 0;
//}
//int count = 0;
//void hanoi(int n, char a, char b, char c) {
//	if (1 == n) {
//		count += 2;
//		return;
//	}
//	hanoi(n - 1, 'a', 'b', 'c');
//	count++;
//	hanoi(n - 1, 'c', 'b', 'a');
//	count++;
//	hanoi(n - 1, 'a', 'b', 'c');
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//	printf("%d", count);
//	return 0;
//}
//int IsPrime(int num) {
//	if (num <= 3)
//		return 1;
//	if (num % 6 != 1 && num % 6 != 5)
//		return 0;
//	for (int i = 5; i * i <= num; i += 6) {
//		if (num % i == 0 || num % (i + 2) == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//#include<stdio.h>
//int main() {
//	int n, num;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num);
//		if (IsPrime(num))
//			printf("true\n");
//		else
//			printf("false\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	char a1, a2, a3, a4;
//	char arr[10] = { 0 };
//	scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4);
//	for (int i = 0; i < n; i++) {
//		scanf(" %c", &arr[i]);
//		if (arr[i] == a1)
//			arr[i] = a2;
//		if (arr[i] == a3)
//			arr[i] = a4;
//	}
//	for (int i = 0; i < n; i++)
//		printf("%c", arr[i]);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int l, r;
//	scanf("%d %d", &l, &r);
//	for (int i = l; i <= r; i++) {
//		int num = i;
//		int sum = 0;
//		while (num) {
//			int tmp = num % 10;
//			sum += pow(tmp, 4);
//			num /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
#include<stdio.h>
int main() {
	int n, num;
	scanf("%d", n);
	int arr[10] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		int count1 = 0;
		int count2 = 0;
		while (num) {
			if (num % 2 == 0)
				count1++;
			else
				count2++;
			num /= 2;
		}
		if (count1 % 2 == 0 && count2 % 2 == 0)
			arr[i] = 10;
		else if (count1 % 2 == 0)
			arr[i] = 1;
		else if (count2 % 2 == 0)
			arr[i] = 0;
		else
			arr[i] = 100;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}