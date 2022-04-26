#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("************************\n");
	printf("***  1.play  0.exit  ***\n");
	printf("************************\n");
}

void game()
{
	//创建棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	while (1)
	{
		char result = '\0';

		//玩家下棋
		PlayerMove(board, ROW, COL);

		//打印棋盘
		PlayBoard(board, ROW, COL);

		//判断棋盘情况
		result = Situation(board, ROW, COL);
		//是否走下一步
		if (result != 'C')
		{
			//最终结局
			Result(result);
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);

		//打印棋盘
		PlayBoard(board, ROW, COL);

		//判断棋盘情况
		result = Situation(board, ROW, COL);
		//是否走下一步
		if (result != 'C')
		{
			//最终结局
			Result(result);
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入选项：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}