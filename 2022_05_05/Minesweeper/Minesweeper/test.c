#define _CRT_SECURE_NO_WARNINGS
#include "Minesweeper.h"

void menu()
{
	printf("***********************\n");
	printf("****    1. Play    ****\n");
	printf("****    0. Exit    ****\n");
	printf("***********************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	BoardInit(mine, ROWS, COLS, '0');
	BoardInit(show, ROWS, COLS, '*');
	SetMine(mine, ROW, COL);
	SweeperMine(mine, show, ROW, COL);
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
			printf("exit the success\n");
			break;
		default:
			printf("select error, please re-select\n");
			break;
		}
	} while (input);
	return 0;
}