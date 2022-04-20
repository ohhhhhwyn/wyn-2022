#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        while (n)
//        {
//            printf("*");
//            n--;
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        int i;
//        for (i = 0; i < n; i++)
//        {
//            int j;
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        int i;
//        for (i = 0; i < n; i++)
//        {
//            int j;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        int i;
        for (i = 0; i < n; i++)
        {
            int j;
            for (j = n-i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}