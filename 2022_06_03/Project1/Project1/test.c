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
//		printf("�����룺>");
//		scanf("%d", &day);
//		switch (day) {
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�����������������\n");
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
//		printf("�����룺>");
//		scanf("%d", &day);
//		switch (day) {
//		case 1:
//			printf("����һ\n");
//		case 2:
//			printf("���ڶ�\n");
//		case 3:
//			printf("������\n");
//		case 4:
//			printf("������\n");
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�����������������\n");
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
//		printf("�����룺>");
//		scanf("%d", &day);
//		switch (day) {
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("����\n");
//			break;
//		case 6:
//		case 7:
//			printf("��ĩ\n");
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�����������������\n");
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
		printf("������:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("���1\n");
		case 2:
			printf("���2\n");
		default:
			printf("�������\n");
			break;
		case 3:
			printf("���3\n");
			break;
		}
	} while (input);
	return 0;
}