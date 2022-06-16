#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
int main()
{
	for (int A = 0; A <= 1; A++) {
		for (int B = 0; B <= 1; B++) {
			for (int C = 0; C <= 1; C++) {
				for (int D = 0; D <= 1; D++) {
					if ((A == 0) + (C == 1) + (D == 1) + (C == 0) == 3) {
						if (A + B + C + D == 1) {
							if (A == 1) {
								printf("A是凶手\n");
							}
							if (B == 1) {
								printf("B是凶手\n");
							}
							if (C == 1) {
								printf("C是凶手\n");
							}
							if (D == 1) {
								printf("D是凶手\n");
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