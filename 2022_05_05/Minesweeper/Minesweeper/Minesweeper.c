#define _CRT_SECURE_NO_WARNINGS
#include "Minesweeper.h"

void BoardInit(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			board[i][j] = set;
		}
	}
}

void BoardPrint(char board[ROWS][COLS], int row, int col)
{
	for (int k = 0; k <= col; ++k)
	{
		printf("%d ", k);
	}
	printf("\n");
	for (int i = 1; i <= row; ++i)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; ++j)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int amount = MINE_EASY_AMOUNT;
	while (amount)
	{
		int x = 1 + rand() % row;
		int y = 1 + rand() % col;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			--amount;
		}
	}
}

int Find_number(char board[ROWS][COLS], int x, int y)
{
	int sum = 0;
	for (int i = -1; i <= 1; ++i)
	{
		for (int j = -1; j <= 1; ++j)
		{
			sum += (board[x + i][y + j] - '0');
		}
	}
	return sum;
}

void SweeperMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;

	int win_number = MINE_EASY_AMOUNT;

	while (row*col - win_number)
	{
		printf("please enter coordinates:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '*')
			{
				printf("Coordinates have been cleared£¬please re-enter\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("I'm sorry you got blown up\n");
					BoardPrint(mine, ROW, COL);
					break;
				}
				else
				{
					int number = Find_number(mine, x, y);
					show[x][y] = number + '0';
					BoardPrint(show, ROW, COL);
					++win_number;
				}
			}
		}
		else
		{
			printf("coordinates the illegal£¬please re-enter\n");
		}
	}
	if (row * col - win_number == 0)
	{
		printf("Congratulations£¬demining success£¡\n");
		BoardPrint(mine, ROW, COL);
	}
}