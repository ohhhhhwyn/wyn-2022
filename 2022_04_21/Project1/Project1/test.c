#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 20
//int main()
//{
//
//	int a[N] = { 0 }, b[N] = { 0 };
//	int anum, bnum, c[N + N];
//	int* pi, * pj, * pk;
//	scanf("%d", &anum);   //��������aԪ�ظ���
//	for (pi = a; pi < a + anum; pi++)
//	{
//		scanf("%d", pi);
//	}
//	scanf("%d", &bnum);   //��������bԪ�ظ���
//	for (pj = b; pj < b + bnum; pj++)
//	{
//		scanf("%d", pj);
//	}
//	/***** ������a��b��������ʱ�Ƚ��������� *****/
//	pi = a;
//	pj = b;
//	for (pk = c; (pi - 1 != &a[anum - 1]) && (pj - 1 != &b[bnum - 1]); pk++) {
//		if (*pi < *pj) {
//			*pk = *pi;
//			pi++;
//		}
//		else {
//			*pk = *pj;
//			pj++;
//		}
//	}
//	/***** �������a�������� *****/
//	if (pj - 1 == &b[bnum - 1]) {
//		for (; pi < a + anum; pk++) {
//			*pk = *pi;
//			pi++;
//		}
//	}
//	/***** �������b�������� *****/
//	if (pi - 1 == &a[anum - 1]) {
//		for (; pj < b + bnum; pk++) {
//			*pk = *pj;
//			pj++;
//		}
//	}
//	/***** �������c *****/
//	for (pk = c; pk < c + anum + bnum; pk++)
//		printf("%d ", *pk);
//	return 0;
//}
