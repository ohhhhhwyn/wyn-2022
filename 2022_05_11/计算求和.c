#include <stdio.h>
int main()
{
	int num = 0;
	while (~scanf("%d", &num))
	{
		int sum = 0;
		for (int i = 0; i < 5; ++i)
		{
			sum += num;
			num = num * 10 + num % 10;
		}
		printf("%d\n", sum);
	}
	return 0;
}