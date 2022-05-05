#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE_EASY_AMOUNT 10

void BoardInit(char board[ROWS][COLS], int rows, int cols, char set);
void BoardPrint(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS],int row, int col);
void SweeperMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
