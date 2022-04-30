#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<Windows.h>
#include<time.h>
void menu()
{
	printf("*********************\n");
	printf("***    1.start    ***\n");
	printf("***    0.exit     ***\n");
	printf("*********************\n");
}
void Game()
{
	int val = 1 + rand() % 10;
	printf("Please enter the target number:>");
	while (1)
	{
		int num = 0;
		scanf("%d", &num);
		if (val < num)
		{
			printf("Again a little bit small\n");
			printf("Please re-enter:>");
		}
		else if (val > num)
		{
			printf("Again a bit bigger\n");
			printf("Please re-enter:>");
		}
		else
		{
			printf("bingo\n");
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
		printf("Please enter:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			getchar();
			getchar();
			system("cls");
			break;
		case 0:
			printf("Game quit\n");
			break;
		default:
			printf("Please re-enter\n");
			break;
		}
	} while (input);
}