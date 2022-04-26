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
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	while (1)
	{
		char result = '\0';

		//�������
		PlayerMove(board, ROW, COL);

		//��ӡ����
		PlayBoard(board, ROW, COL);

		//�ж��������
		result = Situation(board, ROW, COL);
		//�Ƿ�����һ��
		if (result != 'C')
		{
			//���ս��
			Result(result);
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);

		//��ӡ����
		PlayBoard(board, ROW, COL);

		//�ж��������
		result = Situation(board, ROW, COL);
		//�Ƿ�����һ��
		if (result != 'C')
		{
			//���ս��
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
		printf("������ѡ�>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
	return 0;
}