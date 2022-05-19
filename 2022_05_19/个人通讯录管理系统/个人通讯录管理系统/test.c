#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void menu()
{
	printf("            Ŀ¼             \n");
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
		printf("��ѡ��:>");
		scanf("%d", &select);
		switch (select)
		{
		case Input:
			InputContact(&object);
			system("cls");
			break;
		case Modify:
			ModifyContact(&object);
			printf("�� Enter ����");
			getchar();
			getchar();
			system("cls");
			break;
		case Search:
			SearchContact(&object);
			printf("�� Enter ����");
			getchar();
			getchar();
			system("cls");
			break;
		case Add:
			AddContact(&object);
			printf("�� Enter ����");
			getchar();
			getchar();
			system("cls");
			break;
		case Delete:
			DeleteContact(&object);
			printf("�� Enter ����");
			getchar();
			getchar();
			system("cls");
			break;
		case Output:
			OutputContact(&object);
			printf("�� Enter ����");
			getchar();
			getchar();
			system("cls");
			break;
		case Exit:
			SaveContact(&object);
			DestroyContact(&object);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (select);
	return 0;
}