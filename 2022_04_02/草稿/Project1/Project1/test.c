#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//enum colour
//{
//	RGB,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 4;;
//    a = 5;;
//    const int b = 4;
//    b = 5;
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr1[10] = { 0 };
//
//    int a = 10;
//    int arr2[a] = { 0 };
//
//    const int b = 4;
//    int arr2[b] = { 0 };
//
//    return 0;
//}
//
//
//#include<stdio.h>
//#define MAX 10 
//int main()
//{
//    int arr[MAX] = { 0 };
//    MAX = 20;
//    return 0;
//}
//
//
//
//#include<stdio.h>
//enum colour
//{
//    RGB,
//    GREEN,
//    BLUE
//};
//int main()
//{
//
//    enum colour a = RGB;
//    int arr[GREEN] = { 0 };
//    BLUE = 10;
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'h','e','l','l','o' };
//	char arr3[] = { 'h','e','l','l','o','\0' };
//	printf("%s\n", arr1);
//	printf("%d\n", strlen(arr1));
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr3));
//	return 0;
//}
//
//
//
//
//
//#include<stdio.h>
//int main()
//{
//    printf("c:\test\test.c");
//    return 0;
//}
//
//
//
//
//
//
//
//#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
#include<stdio.h>
/*int Add(int x,int y)
{
	return x+y;
}*/
//int main()
//{
//    int a = 10; //我们定义了一个变量a，并赋予初始值10
//
//    //dwaojdfiawf    把不需要的代码注释掉
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int select;
//    printf("你想变成百万富翁吗？（1/0）");
//    scanf("%d", &select);
//    if (select == 1)
//    {
//        printf("好好学习，努力工作！");
//    }
//    else if (select == 0)
//    {
//        printf("抢劫银行，锒铛入狱！");
//    }
//    else
//    {
//        printf("叫你选1/0，你瞎选什么？？");
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("想成功，你想努力多少天？");
//	int days;
//	scanf("%d", &days);
//	int i = 1;
//	while (i <= days)
//	{
//		printf("努力学习，争得成功！天数%d\n", i);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    printf("请输入两个操作数：>");
//    scanf("%d %d", &num1, &num2);
//    int ret1 = Add(num1, num2);
//    int ret2 = Sub(num1, num2);
//    printf("%d\n", ret1);
//    printf("%d\n", ret2);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3 };
//    int a = arr[0];
//    int b = arr[1];
//    int c = arr[2];
//    printf("%d\n%d\n%d", a, b, c);
//    return 0;
//}
//
//
//
//
#include<stdio.h>
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int i = 10;
    while (i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

