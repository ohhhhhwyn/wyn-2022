#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int cmpInt(const void* e1, const void* e2) {
//	return (*(int*)e2 - *(int*)e1);
//}
//
//typedef struct Student
//{
//	char name[20];
//	int age;
//}Student;
//int cmpStudentAge(const void* e1, const void* e2) {
//	return (((Student*)e1)->age - ((Student*)e2)->age);
//}
//int cmpStudentName(const void* e1, const void* e2) {
//	return strcmp(((Student*)e1)->name, ((Student*)e2)->name);
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, arrSize, sizeof(int), cmpInt);
//	for (int i = 0; i < arrSize; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	Student s[] = { { "zhangsan",20 },{ "lisi",60 },{ "wangwu",40 } };
//	int sSize = sizeof(s) / sizeof(s[0]);
//	qsort(s, sSize, sizeof(Student), cmpStudentAge);
//	for (int i = 0; i < sSize; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//	qsort(s, sSize, sizeof(Student), cmpStudentName);
//	for (int i = 0; i < sSize; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//typedef struct Student {
//	char name[20];
//	int age;
//}Student;
//int cmpStudentName(const void* e1, const void* e2) {
//	return strcmp(((Student*)e1)->name, ((Student*)e2)->name);
//}
//int cmpStudentAge(const void* e1, const void* e2) {
//	return (((Student*)e1)->age - ((Student*)e2)->age);
//}
//int cmp(const void* e1, const void* e2) {
//	return (*(int*)e1 - *(int*)e2);
//}
//void swap(char* e1, char* e2, int width) {
//	for (int i = 0; i < width; i++) {
//		char tmp = *e1;
//		*e1++ = *e2;
//		*e2++ = tmp;
//	}
//}
//void bsort(void* base, int size, int width, int(*cmp)(const void* e1, const void* e2)) {
//	for (int i = 0; i < size - 1; i++) {
//		int flag = 1;
//		for (int j = 0; j < size - 1 - i; j++) {
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (1 == flag) {
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	bsort(arr, arrSize, sizeof(int), cmp);
//	for (int i = 0; i < arrSize; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	Student s[] = { { "zhangsan",20 },{ "lisi",60 },{ "wangwu",40 } };
//	int sSize = sizeof(s) / sizeof(s[0]);
//	bsort(s, sSize, sizeof(Student), cmpStudentName);
//	for (int i = 0; i < sSize; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//	bsort(s, sSize, sizeof(Student), cmpStudentAge);
//	for (int i = 0; i < sSize; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//#include <Windows.h>
//void test() {
//	printf("hello world!\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//int Sub(int x, int y) {
//    return x + y;
//}
//int main()
//{
//    int(*p)(int, int) = &Sub;
//    return 0;
//}
//#include <stdio.h>
//void menu() {
//	printf("************************\n");
//	printf("****  1.Add  2.Sub  ****\n");
//	printf("****  3.Mul  4.Div  ****\n");
//	printf("****  0.Exit        ****\n");
//	printf("************************\n");
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//void menu() {
//	printf("************************\n");
//	printf("****  1.Add  2.Sub  ****\n");
//	printf("****  3.Mul  4.Div  ****\n");
//	printf("****  0.Exit        ****\n");
//	printf("************************\n");
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//#include <stdio.h>
//void menu() {
//	printf("************************\n");
//	printf("****  1.Add  2.Sub  ****\n");
//	printf("****  3.Mul  4.Div  ****\n");
//	printf("****  0.Exit        ****\n");
//	printf("************************\n");
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//void calc(int(*p)(int, int)) {
//	int x = 0, y = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//  int input = 0;
//	int x = 0, y = 0;
//	int(*p[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", p[input](x, y));
//		}
//		else if(0 == input){
//			printf("退出\n");
//			break;
//		}
//		else {
//			printf("请重新选择\n");
//		}
//	} while (input);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//int cmp(const void* e1, const void* e2) {
//    return (*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//    int arr[] = { 1,3,2,4,6,5,8,7,0,9 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("排序前：\n");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    qsort(arr, size, sizeof(int), cmp);
//    printf("排序后：\n");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    system("pause");
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//typedef struct Student {
//	char name[20];
//	int age;
//}Student;
//int cmpStudentAge(const void* e1, const void* e2) {
//	return (((Student*)e2)->age - ((Student*)e1)->age);
//}
//int main()
//{
//	Student s[] = { { "zhangsan", 20 }, { "lisi", 60 }, { "wangwu", 40 } };
//	int sSize = sizeof(s) / sizeof(s[0]);
//	printf("排序前：\n");
//	for (int i = 0; i < sSize; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//	qsort(s, sSize, sizeof(Student), cmpStudentAge);
//	printf("排序后：\n");
//	for (int i = 0; i < sSize; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct Student {
//	char name[20];
//	int age;
//}Student;
//int cmpStudentName(const void* e1, const void* e2) {
//	return strcmp(((Student*)e1)->name, ((Student*)e2)->name);
//}
//int main()
//{
//	Student s[] = { { "zhangsan", 20 }, { "lisi", 60 }, { "wangwu", 40 } };
//	int sSize = sizeof(s) / sizeof(s[0]);
//	printf("排序前：\n");
//	for (int i = 0; i < sSize; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//	qsort(s, sSize, sizeof(Student), cmpStudentName);
//	printf("排序后：\n");
//	for (int i = 0; i < sSize; i++) {
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
#include <stdio.h>
#include <Windows.h>
int cmp(const void* e1, const void* e2) {
	return (*(int*)e1 - *(int*)e2);
}
void sort(char* e1, char* e2, int width) {
	for (int i = 0; i < width; i++) {
		char tmp = *e1;
		*e1++ = *e2;
		*e2++ = tmp;
	}
}
void bsort(void* base, int size, int width, int(*cmp)(const void* e1, const void* e2)) {
	for (int i = 0; i < size - 1; i++) {
		int flag = 1;
		for (int j = 0; j < size - 1 - i; j++) {
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				sort((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (1 == flag) {
			break;
		}
	}
}
int main()
{
	int arr[] = { 1,3,2,4,6,5,8,7,0,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("排序前：\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	bsort(arr, size, sizeof(int), cmp);
	printf("排序后：\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}