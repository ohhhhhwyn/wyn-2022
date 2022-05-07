#define _CRT_SECURE_NO_WARNINGS
#include "MineSweeper_Version 2.h"

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
	for (int i = 1; i <= ROW; ++i)
	{
		if (i == 1)
		{
			for (int k = 0; k <= ROW; ++k)
			{
				printf("####");
			}
			printf("\n");
			for (int k = 0; k <= ROW; ++k)
			{
				printf(" %d ", k);
				if (k < ROW)
				{
					printf("|");
				}
			}
			printf("\n");
			for (int k = 0; k <= ROW; ++k)
			{
				printf("---");
				if (k < ROW)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		printf(" %d ", i);
		for (int j = 1; j <= COL; ++j)
		{
			printf("|");
			printf(" %c ", map[i][j]);
		}
		printf("\n");
		if (i < ROW)
		{
			for (int k = 0; k <= ROW; ++k)
			{
				printf("---");
				if (k < ROW)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void MineSet(char map[ROWS][COLS])
{
	int mine_num = MINE_NUM;
	while (--mine_num)
	{
		int x = 1 + rand() % 9;
		int y = 1 + rand() % 9;
		if (map[x][y] == '0')
		{
			map[x][y] = '1';
		}
	}
}

int SearchMineNum(char real[ROWS][COLS], int x, int y)
{
	int sum = 0;
	for (int i = -1; i <= 1; ++i)
	{
		for (int j = -1; j <= 1; ++j)
		{
			sum += real[x + i][y + j] - '0';
		}
	}
	return sum;
}

void space(char real[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (SearchMineNum(real, x, y) == 0)
	{
		show[x][y] = ' ';
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (i >= 1 && i <= ROW && j >= 1 && j <= COL && real[i][j] != '1' && show[i][j] == '*')
				{
					space(real, show, i, j);
				}
			}
		}
	}
	else
	{
		show[x][y] = '0' + SearchMineNum(real, x, y);
	}
}

void MineSweeper(char real[ROWS][COLS], char show[ROWS][COLS])
{
	int x = 0, y = 0;
	int flag = 1;
	int count = ROW * COL - MINE_NUM;
	MapPrint(show);
	while (--count)
	{
		if (flag == 1)
		{
			printf("Please enter coordinates:>");
		}
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (show[x][y] != '*')
			{
				flag = 0;
				printf("Coordinates have been taken, please re-enter:>");
			}
			else
			{
				if (real[x][y] == '1')
				{
					MapPrint(real);
					printf("I'm sorry, you got blown up!!!\n");
					break;
				}
				else
				{
					flag = 1;
					show[x][y] = SearchMineNum(real, x, y) + '0';
					space(real, show, x, y);
					getchar();
					system("cls");
					MapPrint(show);
				}
			}
		}
		else
		{
			flag = 0;
			printf("Coordinates the illegal, please re-enter:>");
		}
	}
	if (count == 0)
	{
		MapPrint(real);
		printf("Congratulations demining success!!!\n");
	}
}