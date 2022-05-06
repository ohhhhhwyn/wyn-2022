#define _CRT_SECURE_NO_WARNINGS
#include "Minesweeper Upgrade.h"

void menu()
{
	printf("***************************\n");
	printf("*****     1. Play     *****\n");
	printf("*****     0. Exit     *****\n");
	printf("***************************\n");
}

void game()
{
	char real[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	MapInit(real, '0');
	MapInit(show, '*');
	MineSet(real);
	MineFind(real, show);
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
			game();
			break;
		case 0:
			printf("Exit the success!\n");
			break;
		default:
			printf("Wrong selection, please select again!\n");
			break;
		}
	} while (input);
	return 0;
}