#include <stdio.h>
int soda_sum(int money)
{
	int drinked = 0;
	int bottle_empty = money;
	int drinked_sum = 0;
	while (bottle_empty / 2)
	{
		drinked = (drinked == 0 ? money : bottle_empty / 2);
		drinked_sum += drinked;
		bottle_empty = drinked + (bottle_empty % 2);
	}
	return drinked_sum;
}
int main()
{
	int money = 0;
	while (~scanf("%d", &money))
	{
		printf("汽水瓶数：%d\n", soda_sum(money));
	}
	return 0;
}