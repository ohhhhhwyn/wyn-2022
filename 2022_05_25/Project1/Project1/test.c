#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--) {
		printf("%u\n", i);
	}
	system("pause");
	return 0;
}

//int main()
//{
//	int a = 9;
//	printf("%f\n", a);
//	system("pause");
//	return 0;
//}