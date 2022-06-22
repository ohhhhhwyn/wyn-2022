#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>

enum color {
	RED,
	GREEN,
	BLUE
};

int main()
{
	
	printf("%d\n", (int)sizeof(enum color));
	system("pause");
	return 0;
}