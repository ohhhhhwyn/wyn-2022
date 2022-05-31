#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main()
{
	int arr[3][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };
	int(*pa)[4] = arr;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", *(*(pa + i) + j));
		}
		printf("\n");
	}
	/*int arr[10];
	printf("arr = %p\n", arr);
	printf("arr + 1 = %p\n", arr + 1);
	printf("&arr = %p\n", &arr);
	printf("&arr + 1 = %p\n", &arr + 1);*/
	/*const char* ps1 = "hello world";
	const char* ps2 = "hello world";
	char ps3[] = "hello world";
	char ps4[] = "hello world";
	if (ps1 == ps2) {
		printf("ps1 == ps2\n");
	}
	else {
		printf("ps1 != ps2\n");
	}
	if (ps3 == ps4) {
		printf("ps3 == ps4\n");
	}
	else {
		printf("ps3 != ps4\n");
	}*/
	system("pause");
	return 0;
}