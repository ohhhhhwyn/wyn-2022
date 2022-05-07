#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE_NUM 15

void MapInit(char map[ROWS][COLS], char set);
void MapPrint(char map[ROWS][COLS]);
void MineSet(char map[ROWS][COLS]);
void MineSweeper(char real[ROWS][COLS], char show[ROWS][COLS]);
void space(char real[ROWS][COLS], char show[ROWS][COLS], int x, int y);

