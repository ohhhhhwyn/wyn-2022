#include <stdio.h>
int main()
{
	char x[10] = {0};
    fgets(x,10,stdin);
	int sum = 0;
	for (int i = 0; i < 10; i++){
		if (x[i] == '\0')
			break;
		if (x[i] != ' ' && x[i] != '\n')
			sum++;	
	}
	printf("%d\n", sum);
	return 0;
}