/********** Begin **********/
#include<stdio.h>
#define N 19
int main()
{
	int n = 0;
	int arr[N][N] = { 0 };
	int val = 0, sum = 0;
	int i = 0, j = 0;
	//输入
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//判断行
	for (i = 0; i < n; ++i)
	{
		sum = 0;
		for (j = 0; j < n; ++j)
		{
			sum += arr[i][j];
		}
		val = (val == 0) ? sum : val;
		if (val != sum)
		{
			printf("No\n");
			return 0;
		}
	}
	//判断列
	for (i = 0; i < n; ++i)
	{
		sum = 0;
		for (j = 0; j < n; ++j)
		{
			sum += arr[j][i];
		}
		if (val != sum)
		{
			printf("No\n");
			return 0;
		}
	}
	//判断对角线
	sum = 0;
	for (i = 0, j = 0; i < n; ++i)
	{
		sum += arr[i][j];
	}
	if (val != sum)
	{
		printf("No\n");
		return 0;
	}
	printf("Yes\n");
	return 0;
}
/********** End **********/