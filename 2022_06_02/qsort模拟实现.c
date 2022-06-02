#include <stdio.h>
#include <string.h>
typedef struct Student {
	char name[20];
	int age;
}Student;
int cmpStudentName(const void* e1, const void* e2) {
	return strcmp(((Student*)e1)->name, ((Student*)e2)->name);
}
int cmpStudentAge(const void* e1, const void* e2) {
	return (((Student*)e1)->age - ((Student*)e2)->age);
}
int cmp(const void* e1, const void* e2) {
	return (*(int*)e1 - *(int*)e2);
}
void swap(char* e1, char* e2, int width) {
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
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
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
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	bsort(arr, arrSize, sizeof(int), cmp);
	for (int i = 0; i < arrSize; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	Student s[] = { { "zhangsan",20 },{ "lisi",60 },{ "wangwu",40 } };
	int sSize = sizeof(s) / sizeof(s[0]);
	bsort(s, sSize, sizeof(Student), cmpStudentName);
	for (int i = 0; i < sSize; i++) {
		printf("%s %d\n", s[i].name, s[i].age);
	}
	printf("\n");
	bsort(s, sSize, sizeof(Student), cmpStudentAge);
	for (int i = 0; i < sSize; i++) {
		printf("%s %d\n", s[i].name, s[i].age);
	}
	printf("\n");
	return 0;
}﻿