#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("************************\n");
	printf("****	1. Play	    ****\n");
	printf("****	0. Exit	    ****\n");
	printf("************************\n");
}

void Game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	BoardInit(board, ROW, COL);
	while (1)
	{
		Move_Player(board, ROW, COL);
		BoardPrint(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Move_Computer(board, ROW, COL);
		BoardPrint(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("Players win!\n");
	}
	else if (ret == '#')
	{
		printf("Computer win!\n");
	}
	else
	{
		printf("Level the score!\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("Please select£º>");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			Game();
			break;
		case 0:
			printf("Game to exit\n");
			break;
		default:
			printf("Enter Error, Please re-enter!\n");
		}
	} while (input);
	return 0;
}