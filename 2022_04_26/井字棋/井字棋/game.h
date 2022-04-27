#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void PlayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж��������
char Situation(char board[ROW][COL], int row, int col);

//���ս��
void Result(char result);

//�������	*
//��������	#

//���Ӯ	*
//����Ӯ	#
//��һ��	C
//ƽ��		D