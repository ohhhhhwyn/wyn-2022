
#include <stdio.h>
int main()
{
	for (char killer = 'A'; killer <= 'D'; ++killer)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("杀人凶手是 %c\n", killer);
		}
	}
	return 0;
}