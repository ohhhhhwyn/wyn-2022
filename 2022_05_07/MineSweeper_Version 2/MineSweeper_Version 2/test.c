#define _CRT_SECURE_NO_WARNINGS
#include "MineSweeper_Version 2.h"

void menu()
{
	printf("***********************\n");
	printf("*** 1.Play   0.Exit ***\n");
	printf("***********************\n");
}

void game()
{
	char real[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	MapInit(real, '0');
	MapInit(show, '*');
	MineSet(real);
	MineSweeper(real, show);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("Please select:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			getchar();
			system("cls");
			game();
			break;
		case 0:
			printf("Exit the success\n");
			break;
		default:
			printf("Select error, please re-select\n");
			break;
		}
	} while (input);
	return 0;
}