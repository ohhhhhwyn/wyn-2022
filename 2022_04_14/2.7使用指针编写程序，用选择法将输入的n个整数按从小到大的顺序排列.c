#include<stdio.h>
#define N 20
int main()
{
	/***** 用选择法排序 *****/
	/********** Begin *********/
	int n;
	scanf("%d", &n);
	int arr[N] = { 0 };
	int * pi, * pj;
	for (pi = arr; pi < arr + n;pi++) {
		scanf("%d", pi);
	}
	for (pi = arr; pi < arr + n-1; pi++) {
		int * MinIndex = pi;
		for (pj = pi + 1; pj < arr + n; pj++) {
			if (*MinIndex > *pj) {
				MinIndex = pj;
			}
		}
		int tmp = *MinIndex;
		*MinIndex = *pi;
		*pi = tmp;
	}
	for (pi = arr; pi < arr + n; pi++)
		printf("%d ", *pi);
	
	/********** End **********/	
}
