//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//int compare(const void* elem1, const void* elem2) {
//	return *(int*)elem1 > *(int*)elem2;
//}
//void swap(char* elem1, char* elem2, size_t width) {
//	for (int i = 0; i < width; i++) {
//		char tmp = *elem1;
//		*elem1++ = *elem2;
//		*elem2++ = tmp;
//	}
//}
//void bsort(void* base, size_t num, size_t width, int(* compare)(const void* elem1, const void* elem2)) {
//	for (int i = 0; i < num - 1; i++) {
//		int flag = 1;
//		for (int j = 0; j < num - 1 - i; j++) {
//			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag) {
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,8,3,5,4,9,7,6,2,0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	printf("before:");
//	for (int i = 0; i < arrSize; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	bsort(arr, arrSize, sizeof(int), compare);
//	printf(" after:");
//	for (int i = 0; i < arrSize; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct student {
//	char name[20];
//	int age;
//}student;
//int compare_student_name(const void* elem1, const void* elem2) {
//	return strcmp(((student*)elem1)->name, ((student*)elem2)->name);
//}
//int compare_student_age(const void* elem1, const void* elem2) {
//	return (((student*)elem1)->age - ((student*)elem2)->age);
//}
//int compare_int(const void* elem1, const void* elem2) {
//	return *(int*)elem1 > *(int*)elem2;
//}
//void swap(char* elem1, char* elem2, size_t width) {
//	for (int i = 0; i < width; i++) {
//		char tmp = *elem1;
//		*elem1++ = *elem2;
//		*elem2++ = tmp;
//	}
//}
//void bsort(void* base, size_t num, size_t width, int(*compare)(const void* elem1, const void* elem2)) {
//	for (int i = 0; i < num - 1; i++) {
//		int flag = 1;
//		for (int j = 0; j < num - 1 - i; j++) {
//			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag) {
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,8,3,5,4,9,7,6,2,0 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	printf("before:");
//	for (int i = 0; i < arrSize; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	bsort(arr, arrSize, sizeof(int), compare_int);
//	printf(" after:");
//	for (int i = 0; i < arrSize; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	student stu[] = { { "zhangsan",20 },{ "lisi",60 },{ "wangwu",40 } };
//	int stuSize = sizeof(stu) / sizeof(stu[0]);
//	printf("before age:");
//	for (int i = 0; i < stuSize; i++) {
//		printf("%d ", stu[i].age);
//	}
//	printf("\n");
//	printf("before name:");
//	for (int i = 0; i < stuSize; i++) {
//		printf("%s ", stu[i].name);
//	}
//	printf("\n");
//	bsort(stu, stuSize, sizeof(student), compare_student_age);
//	printf("after age:");
//	for (int i = 0; i < stuSize; i++) {
//		printf("%d ", stu[i].age);
//	}
//	printf("\n");
//	bsort(stu, stuSize, sizeof(student), compare_student_name);
//	printf("after name:");
//	for (int i = 0; i < stuSize; i++) {
//		printf("%s ", stu[i].name);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
void reverse(char* str2, int left, int right) {
	while (left < right) {
		char tmp = str2[left];
		str2[left++] = str2[right];
		str2[right--] = tmp;
	}
}
void rotate(char* str) {
	int len = (int)strlen(str);
	reverse(str, 1, len - 1);
	reverse(str, 0, len - 1);
}
int judge(const char* str1, char* str2) {
	int flag = 0;
	for (int i = 0; i < (int)strlen(str2); i++) {
		if (strcmp(str1, str2) == 0 && flag == 0) {
			flag = 1;
		}
		rotate(str2);
	}
	return flag;
}
int main()
{
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	if (judge(str1, str2)) {
		printf("Yes!\n");
	}
	else {
		printf("No\n");
	}
	system("pause");
	return 0;
}