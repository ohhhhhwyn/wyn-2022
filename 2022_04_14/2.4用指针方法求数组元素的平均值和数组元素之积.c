#include <stdio.h>
#define N 10
int main()
{
	/********** Begin *********/
	int arr[N] = { 0 };
	int* p = arr;
	int sum = 0;
	long long product = 1;
	double average = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", (p + i));
		sum += *(p + i);
		product *= *(p + i);
	}
	average = sum * 1.0 / N;
	printf("平均值：%lf\n积：%lf\n", average, (double)product);
	/********** End **********/
}
