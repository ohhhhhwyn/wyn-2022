#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	while (1) {
//		char c = getchar();
//		if ('#' == c) {
//			break;
//		}
//		putchar(c);
//	}
//	printf("\nbreak out!\n");
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	char c = '\0';
//	while (1 && ('#' != c || printf("\ncontinue here\n"))) {
//		c = getchar();
//		if ('#' == c) {
//			continue;
//		}
//		putchar(c);
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	for (int i = 0; i < 10; i++) {
//		if (5 == i) {
//			continue;
//		}
//		printf("%d ", i);
//	}
//
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	char c = '\0';
//	do
//	{
//		c = getchar();
//		if ('#' == c) {
//			continue;
//		}
//		putchar(c);
//	} while (1 && ('#' != c || printf("\ncontinue here\n")));
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	switch (1)
//	{
//	case 1:
//		printf("hehe\n");
//		continue;
//	default:
//		break;
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 100; j++) {
//			printf("hello world\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	for (int i = 0; i <= 9; i++) {
//		printf("hello world\n");
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	for (int i = 0; i < 10; i++) {
//		printf("hello world\n");
//		i = 5;
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	int n = 0;
//start:
//	printf("%d ", n++);
//	if (n < 10) {
//		goto start;
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	goto end;
//	printf("1\n");
//	printf("2\n");
//	printf("3\n");
//end:
//	printf("4\n");
//	printf("5\n");
//	printf("6\n");
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//void test() {
//start:
//	printf("hello world!\n");
//}
//int main()
//{
//	goto start;
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	for (int i = 0; i < 10; i++) {
//start:
//	}
//	for (int i = 0; i < 10; i++) {
//		goto start;
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	printf("%d\n", sizeof(void));
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//void test() {
//	return 1;
//}
//int main()
//{
//	int ans = test();
//	printf("%d\n", ans);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//void test(void) {
//	printf("hello world!\n");
//}
//int main()
//{
//	test(10);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	void* p = NULL;
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	int* pi = NULL;
//	char* pc = NULL;
//	void* pv1 = NULL;
//	void* pv2 = NULL;
//	pv1 = pi;
//	pv2 = pc;
//	pi = pv2;
//	pc = pv2;
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//int main()
//{
//	int* pi = NULL;
//	printf("%d\n", pi);
//	pi++;
//	printf("%d\n", pi);
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <Windows.h>
int main()
{
	void* p = NULL;

	*p;
	system("pause");
	return 0;
}