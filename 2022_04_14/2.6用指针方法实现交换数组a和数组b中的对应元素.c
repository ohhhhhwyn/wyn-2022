#include <stdio.h>
#define N 20
int main()
{
    int a[N] ={ 0 }, b[N] ={ 0 },temp;
	int anum,bnum;
	int *pi, *pj;
	/********** Begin *********/
    scanf("%d", &anum);
	for (pi = a; pi < a + anum; pi++)
		scanf("%d", pi);
	scanf("%d", &bnum);
	for (pj = b; pj < b + bnum; pj++)
		scanf("%d", pj);
	pi = a;
	pj = b;
	while (1) {
		temp = *pi;
		*pi = *pj;
		*pj = temp;
		pi++;
		pj++;
		if (pi == (a + (anum > bnum ? anum : bnum)) && pj ==( b + (anum > bnum ? anum : bnum))) {
			temp = anum;
			anum = bnum;
			bnum = temp;
			break;
		}
	}
	for (pi = a; pi < a + anum; pi++)
		printf("%d ", *pi);
	printf("\n");
	for (pj = b; pj < b + bnum; pj++)
		printf("%d ", *pj);
	/********** End **********/
	
}
