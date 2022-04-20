#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void menu() {
	printf("***********************\n");
	printf("**  1.start  0.exit  **\n");
	printf("***********************\n");
}
void game() {
	srand((unsigned)time(NULL));
	int ans = rand() % 1997 - 998;
	int input = 0;
	int stage = 0;
	int max_stage = 10;
	printf("请猜一个范围在（-999，999）的整数。\n\n");
	do {
		printf("还剩%d次机会。是多少呢：", max_stage - stage);
		scanf("%d", &input);
		stage++;
		if (ans > input)
			printf("再大一点。\n");
		else if (ans > input)
			printf("再小一点。\n");
	} while (max_stage>stage&&ans!=input);
	if(ans!=input)
		printf("很遗憾，正确答案是%d。\n", ans);
	else {
		printf("回答正确。\n");
		printf("您用了%d次猜中了。\n", stage);
	}
}
int main() {
	int input = 0;
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			system("cls");
			printf("\n选择错误,请重新输入！\n\n");
		}
	} while (input);
	return 0;
}