#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void menu()
{
	printf("            目录             \n");
	printf("*****************************\n");
	printf("     1.Input	2.Modify     \n");
	printf("     3.Search   4.Add        \n");
	printf("     5.Delete   6.Output     \n");
	printf("       0.Save the exit       \n");
	printf("*****************************\n");
}

int main()
{
	Contact object;
	InitContact(&object);
	int select = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &select);
		switch (select)
		{
		case Input:
			InputContact(&object);
			system("cls");
			break;
		case Modify:
			ModifyContact(&object);
			printf("按 Enter 继续");
			getchar();
			getchar();
			system("cls");
			break;
		case Search:
			SearchContact(&object);
			printf("按 Enter 继续");
			getchar();
			getchar();
			system("cls");
			break;
		case Add:
			AddContact(&object);
			printf("按 Enter 继续");
			getchar();
			getchar();
			system("cls");
			break;
		case Delete:
			DeleteContact(&object);
			printf("按 Enter 继续");
			getchar();
			getchar();
			system("cls");
			break;
		case Output:
			OutputContact(&object);
			printf("按 Enter 继续");
			getchar();
			getchar();
			system("cls");
			break;
		case Exit:
			SaveContact(&object);
			DestroyContact(&object);
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (select);
	return 0;
}