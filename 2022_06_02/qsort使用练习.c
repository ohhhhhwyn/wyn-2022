#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmpInt(const void* e1, const void* e2) {
	return (*(int*)e2 - *(int*)e1);
}

typedef struct Student
{
	char name[20];
	int age;
}Student;
int cmpStudentAge(const void* e1, const void* e2) {
	return (((Student*)e1)->age - ((Student*)e2)->age);
}
int cmpStudentName(const void* e1, const void* e2) {
	return strcmp(((Student*)e1)->name, ((Student*)e2)->name);
}
﻿
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, arrSize, sizeof(int), cmpInt);
	for (int i = 0; i < arrSize; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	Student s[] = { { "zhangsan",20 },{ "lisi",60 },{ "wangwu",40 } };
	int sSize = sizeof(s) / sizeof(s[0]);
	qsort(s, sSize, sizeof(Student), cmpStudentAge);
	for (int i = 0; i < sSize; i++) {
		printf("%s %d\n", s[i].name, s[i].age);
	}
	printf("\n");
	qsort(s, sSize, sizeof(Student), cmpStudentName);
	for (int i = 0; i < sSize; i++) {
		printf("%s %d\n", s[i].name, s[i].age);
	}
	return 0;
}