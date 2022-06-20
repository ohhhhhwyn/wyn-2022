//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//int main()
//{
//	const int arr[] = {0,1,2,3,4};
//	int* p = arr + 3;
//	*p = 9;
//	printf("%d\n", arr[3]);
//
//	system("pause");
//	return 0;
//}
//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//int main()
//{
//	const int arr[] = { 0,1,2,3,4 };
//	int* p = arr + 3;
//	*p = 9;
//	printf("%d\n", arr[3]);
//
//	system("pause");
//	return 0;
//}
#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int main()
{
    printf("%d\n", addDigits(38));
	system("pause");
	return 0;
}