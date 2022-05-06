#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2

#define MINE_NUM 10

void MapInit(char map[ROWS][COLS], char set);

void MapPrint(char map[ROWS][COLS]);

void MineSet(char map[ROWS][COLS]);

void MineFind(char real[ROWS][COLS], char show[ROWS][COLS]);