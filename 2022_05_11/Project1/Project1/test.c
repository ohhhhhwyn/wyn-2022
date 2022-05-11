#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
///*********Begin*********/
//struct Student
//{
//    long number;
//    char name[20];
//    int score;
//};
//int main()
//{
//    struct Student s1;
//    struct Student s2;
//    scanf("%ld %s %d", &s1.number, &s1.name, &s1.score);
//    scanf("%ld %s %d", &s2.number, &s2.name, &s2.score);
//    if (s1.score > s2.score)
//    {
//        printf("%ld %s %d", s1.number, s1.name, s1.score);
//    }
//    else
//    {
//        printf("%ld %s %d", s2.number, s2.name, s2.score);
//    }
//    return 0;
//}
///*********End*********/
//#include<stdio.h>
//#include<string.h>
//int Count;
//struct student {
//    char sno[20], name[20];
//    int math, english, chinese, sum;
//};
//
//void print(struct student stu) {
//    printf("%s %s %d %d %d %d\n", 
//        stu.sno, 
//        stu.name, 
//        stu.math, 
//        stu.english, 
//        stu.chinese, 
//        stu.sum);
//}
//
//void score_sum(struct student* p)
//{
//    p->sum = p->math + p->english + p->chinese;
//}
//
//void query_stu(struct student s[], char* name) {
//    /*********Begin*********/
//    for (int i = 0; i < Count; ++i)
//    {
//        if (strcmp(s[i].name, name) == 0)
//        {
//            score_sum(&s[i]);
//            print(s[i]);
//        }
//    }
//    /*********End**********/
//}
//
//void delete_stu(struct student s[], char* sno) {
//    /*********Begin*********/
//    for (int i = 0; i < Count; ++i)
//    {
//        if (strcmp(s[i].sno, sno) == 0)
//        {
//            for (int j = i; j < Count - 1; ++j)
//            {
//                s[j] = s[j + 1];
//            }
//        }
//        score_sum(&s[i]);
//    }
//    /*********End**********/
//}
//
//void update_stu(struct student s[], char* sno, int math, int english, int chinese) {
//    /*********Begin*********/
//    for (int i = 0; i < Count; ++i)
//    {
//        if (strcmp(s[i].sno, sno) == 0)
//        {
//            s[i].math = math;
//            s[i].english = english;
//            s[i].chinese = chinese;
//        }
//        score_sum(&s[i]);
//    }
//    /*********End**********/
//}
//
//int main(void)
//{
//    int n, q;
//    struct student students[50];
//    scanf("%d%d", &n, &q);
//    Count = n;
//    for (int i = 0; i < n; i++) {
//        /*********Begin*********/
//        scanf("%s %s %d %d %d",
//            &students[i].sno,
//            &students[i].name,
//            &students[i].math,
//            &students[i].english,
//            &students[i].chinese);
//        /*********End**********/
//    }
//    while (q--) {
//        int op;
//        scanf("%d", &op);
//        char sno[20], name[20];
//        if (op == 1) {
//            scanf("%s", name);
//            query_stu(students, name);
//        }
//        else if (op == 2) {
//            int a, b, c;
//            scanf("%s%d%d%d", sno, &a, &b, &c);
//            update_stu(students, sno, a, b, c);
//            for (int i = 0; i < Count; i++)
//                print(students[i]);
//        }
//        else {
//            scanf("%s", sno);
//            delete_stu(students, sno);
//            for (int i = 0; i < Count - 1; i++)
//                print(students[i]);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//double average(int* salary, int salarySize) {
//	int max = salary[0];
//	int min = salary[0];
//	int sum = salary[0];
//	for (int i = 1; i < salarySize; ++i)
//	{
//		max = max < salary[i] ? salary[i] : max;
//		min = min > salary[i] ? salary[i] : min;
//		sum += salary[i];
//	}
//	return (sum - max - min) / (salarySize - 2);
//}
//int main()
//{
//	int arr[] = { 4000,3000,1000,2000 };
//	double ret = average(arr, 4);
//	printf("%lf\n", ret);
//	return 0;
//
/*
if (nums[mid] > target || (lower && nums[mid] >= target)) {
	right = mid - 1;
	ans = mid;
}
else {
	left = mid + 1;
}
*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int binarySearch(int* nums, int left, int right, int target)
//{
//	while (left <= right)
//	{
//		int mid = left + ((right - left) >> 1);
//		if (target < nums[mid])
//		{
//			right = mid - 1;
//		}
//		else if (right > nums[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int search(int* nums, int numsSize, int target) {
//	int ret = 0;
//	int mid = numsSize / 2;
//	while (mid)
//	{
//		if (nums[0] < nums[mid - 1])
//		{
//			ret = binarySearch(nums, 0, mid - 1, target);
//			if (ret != -1 && nums[ret] == target)
//			{
//				return ret;
//			}
//		}
//		else if (nums[mid] < nums[mid + 1])
//		{
//			ret = binarySearch(nums, mid, numsSize, target);
//			if (ret != -1 && nums[ret] == target)
//			{
//				return ret;
//			}
//		}
//		mid = mid / 2;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 4,5,6,7,0,1,2 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, size, 4);
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//void print(int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	print(arr, size);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int num = 0;
	while (~scanf("%d", &num))
	{
		int sum = 0;
		for (int i = 0; i < 5; ++i)
		{
			sum += num;
			num = num * 10 + num % 10;
		}
		printf("%d\n", sum);
	}
	return 0;
}