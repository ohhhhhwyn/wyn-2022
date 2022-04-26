#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void PlayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断棋盘情况
char Situation(char board[ROW][COL], int row, int col);

//最终结局
void Result(char result);

//玩家棋子	*
//电脑棋子	#

//玩家赢	*
//电脑赢	#
//下一步	C
//平局		D