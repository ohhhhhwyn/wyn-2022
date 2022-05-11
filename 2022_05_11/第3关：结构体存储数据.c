#include<stdio.h>
#include<string.h>
/*********Begin*********/
struct Person
{
	char name[10];
	int count;
}leader[3] = {{"Li", 0}, {"Zhang", 0}, {"Sun", 0}};
/*********End**********/
int main(void)
{
	/*********Begin*********/
	char leader_name[20];
	int n = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%s", leader_name);
		for(int j = 0; j < 3; ++j)
		{
			if(strcmp(leader[j].name, leader_name) == 0)
			{
				++leader[j].count;
			}
		}
	}
	for(int i = 0; i < 3; ++i)
	{
		printf("%s:%d\n", leader[i].name, leader[i].count);
	}
	/*********End**********/
    return 0;
}