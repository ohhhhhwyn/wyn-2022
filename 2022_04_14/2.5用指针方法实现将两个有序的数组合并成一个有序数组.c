#include<stdio.h>
#define N 20
int main()
{

	int a[N] = { 0 }, b[N] = { 0 };
	int anum, bnum, c[N + N];
	int* pi, * pj, * pk;
	scanf("%d", &anum);   //输入数组a元素个数
	for (pi = a; pi < a + anum; pi++)
	{
		scanf("%d", pi);
	}
	scanf("%d", &bnum);   //输入数组b元素个数
	for (pj = b; pj < b + bnum; pj++)
	{
		scanf("%d", pj);
	}
	/***** 在数组a和b都有数据时比较两个数组 *****/
	pi = a;
	pj = b;
	for (pk = c;; pk++) {
		if (*pi < *pj) {
			*pk = *pi;
			pi++;
		}
		else {
			*pk = *pj;
			pj++;
		}
		if (pi - 1 == &a[anum - 1])
			break;
		if (pj - 1 == &b[bnum - 1])
			break;
	}
	/***** 如果数组a还有数据 *****/
	if (pj - 1 == &b[bnum - 1]) {
		for (++pk; pi < a + anum; pk++) {
			*pk = *pi;
			pi++;
		}
	}
	/***** 如果数组b还有数据 *****/
	if (pi - 1 == &a[anum - 1]) {
		for (++pk; pj < b + bnum; pk++) {
			*pk = *pj;
			pj++;
		}
	}
	/***** 输出数组c *****/
	for (pk = c; pk < c + anum + bnum; pk++)
		printf("%d ", *pk);
	return 0;
}
