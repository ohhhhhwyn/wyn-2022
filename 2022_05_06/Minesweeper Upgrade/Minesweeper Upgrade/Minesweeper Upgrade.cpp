#define _CRT_SECURE_NO_WARNINGS
#include "Minesweeper Upgrade.h"

void MapInit(char map[ROWS][COLS], char set)
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			map[i][j] = set;
		}
	}
}

void MapPrint(char map[ROWS][COLS])
{
	for (int k = 0; k <= COL; ++k)
	{
		printf("%d ", k);
	}
	printf("\n");
	for (int i = 1; i <= ROW; ++i)
	{
		printf("%d ", i);
		for (int j = 1; j <= COL; ++j)
		{
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}
}

void MineSet(char map[ROWS][COLS])
{
	int mine_num = MINE_NUM;
	while (mine_num)
	{
		int x = 1 + rand() % ROW;
		int y = 1 + rand() % COL;
		if (map[x][y] == '0')
		{
			map[x][y] = '1';
			--mine_num;
		}
	}
}

int Mine_num_find(char map[ROWS][COLS], int x, int y)
{
	int sum = 0;
	for (int i = -1; i <= 1; ++i)
	{
		for (int j = -1; j <= 1; ++j)
		{
			sum += map[x + i][y + j] - '0';
		}
	}
	return sum;
}

void MineFind(char real[ROWS][COLS], char show[ROWS][COLS])
{
	int x = 0, y = 0;
	int win = ROW * COL - MINE_NUM;
	while (win)
	{
		printf("Please input coordinates:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (show[x][y] != '*')
			{
				printf("Coordinates have been taken\n");
			}
			else
			{
				if (real[x][y] == '1')
				{
					printf("I'm sorry you got blown up!\n");
					break;
				}
				else
				{
					--win;
					int num = Mine_num_find(real, x, y);
					show[x][y] = num + '0';
					getchar();
					system("cls");
					MapPrint(show);
				}
			}
		}
		else
		{
			printf("Coordinates the illegal\n");
		}
	}
	if (win == 0)
	{
		printf("Congratulations, demining success!!!\n");
		MapPrint(real);
	}
}