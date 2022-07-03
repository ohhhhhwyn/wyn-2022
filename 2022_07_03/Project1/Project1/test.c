#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <assert.h>
//char* my_strcpy(char* Destination, const char* Source) {
//	assert(Destination && Source);
//	char* ans = Destination;
//	while (*Destination++ = *Source++);
//	return ans;
//}
//char* my_strcat(char* Destination, const char* Source) {
//	assert(Destination && Source);
//	char* ans = Destination;
//	while (*Destination) {
//		Destination++;
//	}
//	while (*Destination++ = *Source++);
//	return ans;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (1 == a &&\ 
//		1 == b &&\ 
//		1 == c) {
//		printf("hello world!\n");
//	}
//
//	system("pause");
//	return 0;
//}
//

//int main()
//{
//
//	printf("hello worldn");
//
//	printf("hello world\n");
//
//	//printf(""");//error
//
//	printf("\"");
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//
//	printf("字符串[1]的大小:%d\n", sizeof("1"));
//
//	printf("字符[1]的大小:%d\n", sizeof('1'));
//
//	system("pause");
//	return 0;
//}
//
//
//
//int main()
//{
//
//	char c1 = '1';
//	char c2 = '12';
//	char c3 = '123';
//	char c4 = '1234';
//
//	printf("%c\n", c1);
//	printf("%c\n", c2);
//	printf("%c\n", c3);
//	printf("%c\n", c4);
//
//	system("pause");
//	return 0;
//}
//



//int main()
//{
//
//	'1';
//	'12';
//	'123';
//	'1234';
//	'12345';
//	'12346';
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//
//	//printf("%d\n", sizeof(''));//error
//
//	printf("%d\n", sizeof(""));
//
//	system("pause");
//	return 0;
//}
//
//


//int main()
//{
//	
//	int i = 0;
//	int j = 0;
//	if ((i++ > 0) && (j++ > 0)) {
//		printf("you can see me!\n");
//	}
//
//	printf("i = %d\nj = %d\n", i, j);
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//
//	int i = 0;
//	int j = 0;
//	if ((i++ > 0) || (j++ > 0)) {
//		printf("you can see me!\n");
//	}
//
//	printf("i = %d\nj = %d\n", i, j);
//
//	system("pause");
//	return 0;
//}


//int show() {
//	printf("hello world!\n");
//	return 1;
//}
//
//int main()
//{
//	int input = 0;
//	while (1) {
//		printf("Please enter:");
//		scanf("%d", &input);
//		input&& show();
//	}
//	system("pause");
//	return 0;
//}


int main()
{
	printf("%d\n", 2 & 3);
	printf("%d\n", 2 | 3);
	printf("%d\n", 2 ^ 3);
	printf("%d\n", ~0);

	system("pause");
	return 0;
}