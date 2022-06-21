#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
//void show(const char* string) {
//	printf("%s\n", string);
//}
//int main()
//{
//	char str[] = "hello world!";
//	show(str);
//	system("pause");
//	return 0;
//}
//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//const int* GetVal() {
//	static int n = 10;
//	int* pn = &n;
//	return pn;
//}
//int main()
//{
//	const int* num = GetVal();
//	system("pause");
//	return 0;
//}
//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	const int* _pa = pa;
//
//	int b = 20;
//	const int* pb = &b;
//	int* _pb = b;
//
//	system("pause");
//	return 0;
//}

//int n = 10;
//
//void show() {
//	printf("hello world!\n");
//}


//struct stu {
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct stu* p = (struct stu*)malloc(sizeof(struct stu) + sizeof(int) * 10);
//	if (p == NULL) {
//		return 0;
//	}
//	else {
//		printf("%p\n", &(p->n));
//		for (int i = 0; i < 10; i++) {
//			p->arr[i] = i;
//		}
//	}
//	system("pause");
//	return 0;
//}

union stu {
	int n;
	char c[4];
}*p, u;

int main()
{
	p = &u;
	p->c[0] = 0x78;
	p->c[1] = 0x56;
	p->c[2] = 0x34;
	p->c[3] = 0x12;
	printf("0x%x\n", p->n);
	system("pause");
	return 0;
}