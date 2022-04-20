#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define MAX_STAGE 10
int main() {
	srand((unsigned)time(NULL));
	int ans = rand()%1997-998;
	int no;
	int num[MAX_STAGE];
	int stage = 0;
	printf("请猜一个范围在（-999，999）的整数。\n\n");
	do {
		printf("还剩%d次机会。是多少呢：", MAX_STAGE - stage);
		scanf("%d", &no);
		num[stage++] = no;
		if (ans > no)
			printf("\a再大一点。\n");
		else if (ans < no)
			printf("\a再小一点。\n");
	} while (stage<MAX_STAGE&&ans!=no);
	if (ans != no)
		printf("\a很遗憾，正确答案是%d。\n", ans);
	else {
		printf("回答正确。\n");
		printf("您用了%d次猜中了。\n", stage);
	}
	puts("\n--- 输入记录 ---\n");
	for (int i = 0; i < stage; i++)
		printf("%2d : %d \n", i + 1, num[i]);
	return 0;
}