#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[30][30] = { 0 };
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (j == 0 || j == i) {
//				arr[i][j] = 1;
//			}
//			else {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int IsWin(int arr[3][3]) {
//	int Player_one = 0;
//	int Player_two = 0;
//	int Blank = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (arr[i][j] == 'K')
//				Player_one++;
//			else if (arr[j][i] == 'K')
//				Player_one++;
//			else if (arr[i][j] == 'B')
//				Player_two++;
//			else if (arr[j][i] == 'B')
//				Player_two++;
//			else if (arr[0][0] == arr[1][1] == arr[2][2] || arr[0][2] == arr[1][1] == arr[2][0]) {
//				if (arr[1][1] == 'K')
//					return 1;
//				if (arr[1][1] == 'B')
//					return 2;
//			}
//			else
//				Blank++;
//		}
//		if (Player_one == 3)
//			return 1;
//		else if (Player_two == 3)
//			return 2;
//		Player_one = 0;
//		Player_two = 0;
//	}
//	if (Blank == 0)
//		return 3;
//	else
//		return 0;
//}
//char IsWin(int arr[3][3], int row, int col) {
//	//判断谁赢
//	for (int i = 0; i < 3; i++) {
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
//			return arr[i][1];
//		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O')
//			return arr[i][1];
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
//		return arr[1][1];
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
//		return arr[1][1];
//	//判断是否走棋子
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 3; j++) {
//			if (arr[i][j] == 'O')
//				return 'O';//继续走棋子
//		}
//	return 'D';//棋盘满
//}
//#include<stdio.h>
//int main() {
//	//初始化棋盘
//	int arr[3][3] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			arr[i][j] = 'O';
//		}
//	}
//	//判断谁下棋
//	int pos = 1;
//	//下棋子的坐标
//	int x, y;
//	//接收棋盘信息
//	char ret = 'O';
//	do {
//		if (pos == 1 && ret == 'O') {
//			scanf("%d %d", &x, &y);
//			arr[x - 1][y - 1] = 'K';
//			//判断输赢
//			ret = IsWin(arr, 3, 3);
//			if (ret != 'O')
//				break;
//			if (ret == 'O')
//				pos = 2;
//		}
//		if (pos == 2 && ret == 'O') {
//			scanf("%d %d", &x, &y);
//			arr[x - 1][y - 1] = 'B';
//			//判断输赢
//			ret = IsWin(arr, 3, 3);
//			if (ret != 'O')
//				break;
//			if (ret == 'O')
//				pos = 1;
//		}
//	} while (1);
//	if (ret == 'K') {
//		printf("KiKi wins!");
//	}
//	if (ret == 'B') {
//		printf("BoBo wins!");
//	}
//	if (ret == 'D') {
//		printf("No winner!");
//	}
//	return 0;
//}
//  ret=='K'  玩家一赢
//  ret=='B'  玩家二赢
//  ret=='D'  平局
//  ret=='O'  继续下棋

//  pos==1  玩家一下棋
//  pos==2  玩家二下棋
//#include <stdio.h>
//int main() {
//	char board[3][3] = { 0 };
//	char flag = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++)
//			scanf(" %c", &board[i][j]);
//	}
//	for (int i = 0; i < 3; i++) {
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != 'O') {
//			flag = board[i][2];
//			break;
//		}
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != 'O') {
//			flag = board[2][i];
//			break;
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != 'O')
//		flag = board[2][2];
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != 'O')
//		flag = board[2][0];
//	if ('K' == flag)
//		printf("KiKi wins!\n");
//	else if ('B' == flag)
//		printf("BoBo wins!\n");
//	else
//		printf("No winner!\n");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int m, n;
//	scanf("%d %d", &m, &n);
//	char* p = (char*)calloc((m + 2) * (n + 2), sizeof(char));
//	for (int i = 1; i < m + 1; i++)
//		for (int j = 1; j < n + 1; j++)
//			scanf(" %c ", p + i * (n + 2) + j);
//	for (int i = 1; i < m + 1; i++) {
//		for (int j = 1; j < n + 1; j++) {
//			if (*(p + i * (n + 2) + j) == '*')
//				printf("*");
//			else {
//				int num = 0;
//				for (int si = i - 1; si <= i + 1; si++) {
//					for (int sj = j - 1; sj <= j + 1; sj++) {
//						if (*(p + si * (n + 2) + sj) == '*')
//							num++;
//					}
//				}
//				printf("%d", num);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char ch[10] = "hellobbit";
//	printf("%s", ch);
//	return 0;
//}