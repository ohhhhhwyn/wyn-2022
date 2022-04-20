#define _CRT_SECURE_NO_WARNINGS
//#include<string.h>
//#include<stdio.h>
//int main() {
//	//char arr[20] = { 0 };
//	//gets(arr);
//	//int len = strlen(arr);
//	//int count_A = 0;
//	//int count_B = 0;
//	//for (int i = 0; i < len; i++) {
//	//	if (arr[i] == 'A')
//	//		count_A++;
//	//	if (arr[i] == 'B')
//	//		count_B++;
//	//}
//	//char arr[10] = { 0 };
//	//int count_A = 0;
//	//int count_B = 0;
//	//int i = 0;
//	//while (~scanf(" %c", &arr[i])) {
//	//	if (arr[i] == 'A')
//	//		count_A++;
//	//	if (arr[i] == 'B')
//	//		count_B++;
//	//	if (arr[i] == '0')
//	//		break;
//	//	i++;
//	//}
//	char ch;
//	int count_A = 0;
//	int count_B = 0;
//	while (~scanf("%c", &ch)) {
//		if (ch == 'A')
//			count_A++;
//		if (ch == 'B')
//			count_B++;
//		if (ch == '0')
//			break;
//	}
//	if (count_A == count_B)
//		printf("E\n");
//	else
//		printf("%c\n", count_A > count_B ? 'A' : 'B');
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	char s[10] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf(" %c", &s[i]);
//	}
//	while (m--) {
//		int l, r;
//		char c1, c2;
//		scanf("%d %d %c %c", &l, &r, &c1, &c2);
//		for (int i = l-1; i < r; i++) {
//			if (s[i] == c1)
//				s[i] = c2;
//		}
//	}
//	printf("%s", s);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	char s[n];
//	for (int i = 0; i < n; i++) {
//		scanf(" %c", &s[i]);
//	}
//	while (m--) {
//		int l, r;
//		char c1, c2;
//		scanf("%d %d %c %c", &l, &r, &c1, &c2);
//		for (int i = l - 1; i < r; i++) {
//			if (s[i] == c1)
//				s[i] = c2;
//		}
//	}
//	for (int i = 0; i < n; i++)
//		printf("%c", s[i]);
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char s[10] = { 0 };
//	char new_s[10] = { 0 };
//	fgets(s, 10, stdin);
//	int len = strlen(s);
//	int i, j;
//	for (i = 1, j = 1; i < len; i++) {
//		if (s[0] >= 'a'&& s[0] >= 'z') {
//			s[0] -= 32;
//			new_s[0] = s[0];
//		}
//		if (s[i] == ' ') {
//			if (s[i + 1] >= 'a'&& s[i + 1] <= 'z') {
//				s[i + 1] -= 32;
//			}
//			new_s[j] = s[i + 1];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//		printf("%c", new_s[i]);
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>

//int main()
//{
//    char arr[5000] = { 0 };
//    gets(arr);
//    printf("%c", toupper(arr[0]));
//    int len = strlen(arr);
//    int i = 0;
//    for (i = 1; i < len - 1; i++)
//    {
//        if (arr[i] == ' ')
//            printf("%c", toupper(arr[i + 1]));
//    }
//    return 0;
//}
//int max3(int a, int b, int c) {
//	int ret = a > b ? a : b;
//	return ret > c ? ret : c;
//}
//#include<stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret1 = max3(a + b, b, c);
//	int ret2 = max3(a, b + c, c);
//	int ret3 = max3(a, b, b + c);
//	double ret = ret1*1.0 / (ret2*1.0 + ret3*1.0);
//	printf("%.2lf", ret);
//	return 0;
//}
//int Sum(int num) {
//	int sum = 0;
//	while (num) {
//		sum += num % 10;
//		num /= 10;
//	}
//	return sum;
//}
//#include<stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int ret = 0;
//	for (int i = a; i <= b; i++) {
//		if (Sum(i) % 5 == 0)
//			ret++;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int Transformation(int n) {
//	int sum = 0;
//	while (n) {
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n >= 10) {
//		n = Transformation(n);
//	}
//	printf("%d",n);
//	return 0;
//}
//int hanshu(int n) {
//	int num = 0;
//	while (n) {
//		if (n % 10 == 2)
//			num++;
//		n /= 10;
//	}
//	return num;
//}
//#include<stdio.h>
//int main() {
//	int L, R;
//	scanf("%d %d", &L, &R);
//	int ret = 0;
//	for (int i = L; i <= R; i++)
//		ret+=hanshu(i);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	int num[10] = { 0 };
//	double sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &num[i]);
//	for (int i = 0; i < n; i++) {
//		if (num[i] > 60)
//			sum += 0.2;
//		else
//			sum += 0.1;
//	}
//	printf("%.1lf", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int Prime(int num) {
//	if (num == 1)
//		return 0;
//	for (int i = 2; i <= sqrt(num); i++)
//		if (num % i == 0)
//			return 0;
//	return num;
//}
//int main() {
//	int l, r;
//	scanf("%d %d", &l, &r);
//	int sum = 0;
//	for (int i = l; i <= r; i++)
//		sum += Prime(i);
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int sum = 0;
//	int min = 999999;
//	int i, j, x, y;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr1[i]);
//		sum += arr1[i];
//	}
//	for (i = 0; i < m; i++)
//		scanf("%d", &arr2[i]);
//	if (m == 1) {
//		printf("%d", arr2[0]);
//		return 0;
//	}
//	for (i = 0; i < m - 1; i++) {
//		int k = i;
//		int sumn = 0;
//		for (j = i + 1; j < m; j++) {
//			while (k <= j) {
//				sumn += arr2[k];
//				k++;
//			}
//			if (min > abs(sumn - sum)) {
//				min = abs(sumn - sum);
//				x = i;
//				y = j;
//			}
//			k = i;
//			sumn = 0;
//		}
//	}
//	for (i = x; i <= y; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	long long n;
//	scanf("%lld", &n);
//	char arr[100] = { 0 };
//	long long sum = n;
//	while (n > 9) {
//		n /= 10;
//		sum = sum * 10 + n % 10;
//	}
//	int i;
//	for (i = 2; i * i <= sum; i++)
//		if (sum % i == 0)
//			break;
//	if (i * i > sum)
//		printf("prime\n");
//	else
//		printf("noprime\n");
//	//printf("%lld", sum);
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//long long func(long long n) {
//	int tmp = n;
//	while (tmp > 9) {
//		tmp /= 10;
//		n = (n * 10 + tmp % 10);
//	}
//	return n;
//}
//int isPrime(long long num)
//{
//	int tmp = sqrt(num);
//	for (int i = 2; i <= tmp; i++)
//		if (num % i == 0)
//			return 0;
//	return 1;
//}
//int main()
//{
//	long long n;
//	scanf("%lld", &n);
//	if (isPrime(func(n)))
//		printf("prime");
//	else
//		printf("noprime");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a = 70;
//	int b = 170;
//	float c;
//	float d = b * 1.0 / 100;
//	c = a / (d * d);
//	printf("%.2f", c);
//	return 0;
//}
#include<stdio.h>
int main() {
	char ch;
	ch = getchar();
	//getchar();
	putchar(ch);
	return 0;
}