#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void BoardInit(char board[ROW][COL], int row, int col);

void BoardPrint(char board[ROW][COL], int row, int col);

void Move_Player(char board[ROW][COL], int row, int col);

void Move_Computer(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);