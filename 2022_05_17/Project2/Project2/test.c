#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 6; ++i)
//    {
//        printf("hello world!\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    printf("%p\n", &i);
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[9]);
//    /*
//    for (i = 0; i <= 12; ++i)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }*/
//    return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//void print(char* string)
//{
//	assert(string != NULL);
//	printf("%s\n", string);
//}
//int main()
//{
//	char* str = "hello world!";
//	char* p1 = str;
//	char* p2 = NULL;
//	print(p1);
//	print(p2);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 30;
	int* const pa = &a;
	a = 20;
	printf("%d\n", a);
	*pa = 50;
	printf("%d\n", a);
	pa = &b;
	printf("%d\n", *pa);
	return 0;
}