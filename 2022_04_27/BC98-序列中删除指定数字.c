#include<stdio.h>
int main()
{
    int n = 0;
    int nums[50] = { 0 };
    int del = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d ",&nums[i]);
    }
    scanf("%d",&del);
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == del)
        {
           continue;
        }
        printf("%d ",nums[i]);
    }
    return 0;
}