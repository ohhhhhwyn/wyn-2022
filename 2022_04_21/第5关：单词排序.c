/********** Begin **********/
#include<stdio.h>
#include<string.h>
int main()
{
	char nums[9][8] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		scanf("%s", nums[i]);
	}
	printf("排序前的字符串：\n");
	for (int i = 0; i < 9; i++)
	{
		printf("%s", nums[i]);
		printf("\n");
	}
	//排序
	for (int i = 0; i < 9 - 1; i++)
	{
		int MinIndex = i;
		for (int j = i + 1; j < 9; j++)
		{
			if (strcmp(nums[MinIndex], nums[j]) >= 0)
			{
				MinIndex = j;
			}
		}
		for (int k = 0; k < 8; k++)
		{
			char tmp = nums[MinIndex][k];
			nums[MinIndex][k] = nums[i][k];
			nums[i][k] = tmp;
		}
	}
	printf("排序后的字符串：\n");
	for (int i = 0; i < 9; i++)
	{
		printf("%s", nums[i]);
		printf("\n");
	}
	return 0;
}
/********** End **********/