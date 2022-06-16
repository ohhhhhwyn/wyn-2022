//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//int main()
//{
//	int row = 5;
//	int arr[5][5] = {0};
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (j == 0 || j == i) {
//				printf("%d ", 1);
//				arr[i][j] = 1;
//			}
//			else {
//				printf("%d ", arr[i - 1][j - 1] + arr[i - 1][j]);
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//#pragma warning(disable:4996)
//#include <Windows.h>
//#include <stdio.h>
//int main()
//{
//	for (int A = 0; A <= 1; A++) {
//		for (int B = 0; B <= 1; B++) {
//			for (int C = 0; C <= 1; C++) {
//				for (int D = 0; D <= 1; D++) {
//					if ((A == 0) + (C == 1) + (D == 1) + (C == 0) == 3) {
//						if (A + B + C + D == 1) {
//							if (A == 1) {
//								printf("A是凶手\n");
//							}
//							if (B == 1) {
//								printf("B是凶手\n");
//							}
//							if (C == 1) {
//								printf("C是凶手\n");
//							}
//							if (D == 1) {
//								printf("D是凶手\n");
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
int main()
{
	for (int A = 1; A <= 5; A++) {
		for (int B = 1; B <= 5; B++) {
			for (int C = 1; C <= 5; C++) {
				for (int D = 1; D <= 5; D++) {
					for (int E = 1; E <= 5; E++) {
						if ((B == 2) + (A == 3) == 1
							&& (B == 2) + (E == 4) == 1
							&& (C == 1) + (D == 2) == 1
							&& (C == 5) + (D == 3) == 1
							&& (E == 4) + (A == 1) == 1) {
							if (A * B * C * D * E == 120) {
								printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}