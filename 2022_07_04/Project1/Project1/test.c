#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
//
//int main()
//{
//	printf("%d\n", 3 ^ 0);
//	printf("%d\n", 0 ^ 0);
//	printf("%d\n", -3 ^ 0);
//
//	printf("%d\n", 3 ^ 3 ^ 4);
//	printf("%d\n", 3 ^ 4 ^ 3);
//	printf("%d\n", 3 ^ (3 ^ 4));
//
//	system("pause");
//	return 0;
//}
//
//void swap1(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap2(int* a, int* b) {
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//
//void swap3(int* a, int* b) {
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("before:\n");
//	printf("%d %d\n", a, b);
//
//	printf("after:\n");
//	swap1(&a, &b);
//	printf("swap1: %d %d\n", a, b);
//
//	swap2(&a, &b);
//	printf("swap2: %d %d\n", a, b);
//
//	swap3(&a, &b);
//	printf("swap3: %d %d\n", a, b);
//
//	system("pause");
//	return 0;
//}



//#define SETBIT(x, n) (x |= (1 << (n - 1)))
//
//void ShowBits(int x) {
//	int count = 31;
//	while (count >= 0) {
//		if (x & (1 << count--)) {
//			printf("1");
//		}
//		else {
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int x = 0;
//	ShowBits(x);
//	SETBIT(x, 1);
//	SETBIT(x, 3);
//	SETBIT(x, 5);
//	SETBIT(x, 32);
//	ShowBits(x);
//
//	system("pause");
//	return 0;
//}


//#define CLRBIT(x, n) (x &= ~(1 << (n - 1)))
//
//void ShowBits(int x) {
//	int count = 31;
//	while (count >= 0) {
//		if (x & (1 << count--)) {
//			printf("1");
//		}
//		else {
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int x = 0xffffffff;
//	ShowBits(x);
//	CLRBIT(x, 1);
//	CLRBIT(x, 3);
//	CLRBIT(x, 5);
//	CLRBIT(x, 32);
//	ShowBits(x);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	char c = 0;
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(~c));
//	printf("%d\n", sizeof(c << 1));
//	printf("%d\n", sizeof(c >> 1));
//
//	system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//	unsigned int a = 1;
//	printf("%u\n", a << 1);
//	printf("%u\n", a << 2);
//	printf("%u\n", a << 3);
//
//	unsigned int b = 100;
//	printf("%u\n", b >> 1);
//	printf("%u\n", b >> 2);
//	printf("%u\n", b >> 3);
//
//	int c = -1;
//	printf("%x  %d\n", c >> 1, c >> 1);
//	printf("%x  %d\n", c >> 2, c >> 2);
//	printf("%x  %d\n", c >> 3, c >> 3);
//
//	unsigned int d = -1;
//	printf("%x  %d\n", d >> 1, d >> 1);
//	printf("%x  %d\n", d >> 2, d >> 2);
//	printf("%x  %d\n", d >> 3, d >> 3);
//
//	system("pause");
//	return 0;
//}

int main()
{
	printf("%d\n", 0x01 << 2 + 3);
	printf("%d\n", 0x01 << (2 + 3));
	printf("%d\n", (0x01 << 2) + 3);
	system("pause");
	return 0;
}
