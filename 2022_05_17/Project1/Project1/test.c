#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct tag
//{
//	10;
//	int arr[10];
//	int* p;
//	struct tag newtag;
//};
//int main()
//{
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//struct stu
//{
//    char name[20];
//    int age;
//};
//int main()
//{
//    struct stu s = { "zhangsan", 20 };
//    struct stu* ps = &s;
//    strcpy(ps->name, "wangwu");
//    ps->age = 80;
//    printf("%s %d\n", ps->name, ps->age);
//    return 0;
//}
//#include <stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//void print1(struct stu s)
//{
//	printf("%s %d\n", s.name, s.age);
//}
//void print2(struct stu* ps)
//{
//	printf("%s %d\n", ps->name, ps->age);
//}
//int main()
//{
//	struct stu s = { "zhangsan", 20 };
//	print1(s);
//	print2(&s);
//	return 0;
//}
//#include <stdio.h>
//int sumOddLengthSubarrays(int* arr, int arrSize) {
//    int sum = 0;
//    for (int start = 0; start < arrSize; ++start)
//    {
//        for (int length = 1; start + length <= arrSize; length += 2)
//        {
//            int end = start + length - 1;
//            for (int i = start; i <= end; ++i)
//            {
//                sum += arr[i];
//            }
//        }
//    }
//    return sum;
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("%d ", sumOddLengthSubarrays(arr, size));
//    return 0;
//}