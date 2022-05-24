#include <stdio.h>
int main()
{
	int n = 5;
	int arr[5][5] = { 0 };
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (j == 0 || j == i)
			{
				printf("%d ", 1);
				arr[i][j] = 1;
			}
			else
			{
				printf("%d ", arr[i - 1][j] + arr[i - 1][j - 1]);
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
		printf("\n");
	}
	return 0;
}