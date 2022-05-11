#include<stdio.h>
/*********Begin*********/
struct Student
{
	long id;
	char name[20];
	int score;
};
/*********End**********/
int main(void)
{
	/*********Begin*********/
	struct Student arr[200];
	int n = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%ld %s %d", &arr[i].id, &arr[i].name, &arr[i].score);
	}
	for(int i = 0; i < n - 1; ++i)
	{
		int max_index = i;
		for(int j = i + 1; j < n; ++j)
		{
			if(arr[max_index].score < arr[j].score)
			{
				max_index = j;
			}
		}
		struct Student tmp = arr[i];
		arr[i] = arr[max_index];
		arr[max_index] = tmp; 
	}
	for(int i = 0; i < n; ++i)
	{
		printf("%ld %s %d\n", arr[i].id, arr[i].name, arr[i].score);
	}
	/*********End**********/
    return 0;
}