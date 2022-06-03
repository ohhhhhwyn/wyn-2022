#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	float m = 10;
//	float f = 10.0f;
//	float c = n + f;
//	int a = n + f;
//	printf("%lf\n", c);
//	printf("%d\n", (int)c);
//	printf("%u\n", (int)c);
//	printf("%lf\n", 20.0f);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	do
//	{
//		printf("请输入：>");
//		scanf("%d", &day);
//		switch (day) {
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期七\n");
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (day);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	do
//	{
//		printf("请输入：>");
//		scanf("%d", &day);
//		switch (day) {
//		case 1:
//			printf("星期一\n");
//		case 2:
//			printf("星期二\n");
//		case 3:
//			printf("星期三\n");
//		case 4:
//			printf("星期四\n");
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期七\n");
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (day);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	do
//	{
//		printf("请输入：>");
//		scanf("%d", &day);
//		switch (day) {
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("周内\n");
//			break;
//		case 6:
//		case 7:
//			printf("周末\n");
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (day);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	const int n = 10;
//	switch (n) {
//	case 5+5:
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int input = 0;
	do
	{
		printf("请输入:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("输出1\n");
		case 2:
			printf("输出2\n");
		default:
			printf("输入错误\n");
			break;
		case 3:
			printf("输出3\n");
			break;
		}
	} while (input);
	return 0;
}