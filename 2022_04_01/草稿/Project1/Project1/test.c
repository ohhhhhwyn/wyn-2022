#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18    man\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr[3] = { 0 };
//    scanf("%s", arr);
//    double ret = 0;
//    switch (arr[1])
//    {
//    case '+':
//        ret = (double)(arr[0] - '0') + (double)(arr[2] - '0');
//        printf("%.4f+%.4f=%.4f", arr[0], arr[2], ret);
//        break;
//    case '-':
//        ret = (double)(arr[0] - '0') - (double)(arr[2] - '0');
//        printf("%.4f-%.4f=%.4f", arr[0], arr[2], ret);
//        break;
//    case '*':
//        ret = (double)(arr[0] - '0') * (double)(arr[2] - '0');
//        printf("%.4f*%.4f=%.4f", arr[0], arr[2], ret);
//        break;
//    case '/':
//        if ((double)(arr[2] - '0') == 0)
//            printf("Wrong!Division by zero!");
//        ret = (double)(arr[0] - '0') / (double)(arr[2] - '0');
//        printf("%.4f/%.4f=%.4f", arr[0], arr[2], ret);
//        break;
//    default:
//        printf("Invalid operation!");
//        break;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    int count = 0;
//    for (; i < 1000; i++)
//    {
//        int j = 1;
//        for (j; j * j < i; j++)
//        {
//            if (i % j != 0)
//                count++;
//        }
//        printf("%d", count);
//        return 0;
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 101; i < 1000; i++)
//    {
//        int j = 0;
//        for (j = 2; j * j < i; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 1000; i++)
//	{
//		int j = 0;
//		for (j = 2; j * j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j * j > i)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	float sum = 0;
//	while (num)
//	{
//	    sum += 1.0 / num;
//	    num--;
//	}
//	printf("%.7f", sum);
//	char ch = '\\0';
//	char ch1 = 'ab';
//	char ch2 = 'abc';
//	printf("%c\n", ch);
//	printf("%c\n", ch1);
//	printf("%d",'\xff');
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	float sum = 0;
//	while (num)
//	{
//	    sum += 1.0 / num;
//	    num--;
//	}
//	printf("%.7f", sum);
//	char ch = '\\0';
//	char ch1 = 'ab';
//	char ch2 = 'abc';
//	printf("%c\n", ch);
//	printf("%c\n", ch1);
//	printf("%d",'\xff');
//	return 0;
//}
//



#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a > b ? a : b);
    return 0;
}




