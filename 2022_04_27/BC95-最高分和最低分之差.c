#include<stdio.h>
int main()
{
    int n = 0;
    int nums[10000] = { 0 };
    int max = 0;
    int min = 100;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d ", &nums[i]);
        if(max < nums[i])
        {
            max = nums[i];
        }
        if(min > nums[i])
        {
            min = nums[i];    
        }
    }
    printf("%d", max - min);
    return 0;
}