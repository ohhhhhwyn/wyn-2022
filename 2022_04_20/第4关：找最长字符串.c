/********** Begin **********/
#include<stdio.h>
#include<string.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	char s1[100] = { 0 };
	char s2[100] = { 0 };
	int max = 0;
	int k = 0;
	while (k < N)
	{
		scanf("%s", s1);
		int count = 0;
		for (int i = 0; s1[i] != '\0'; i++)
		{
			count++;
		}
		if (max <= count)
		{
			max = count;
			for (int i = 0; i < count; i++)
			{
				s2[i] = s1[i];
			}
		}
		k++;
	}
	puts(s2);
	return 0;
}




/********** End **********/