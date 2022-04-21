/********** Begin **********/
#include<stdio.h>
#include "string.h"
int main()
{
    char nums[30] = { 0 };
    fgets(nums, 30, stdin);
    int fast = 0;
    int slow = 0;
    while(nums[fast] != '\0')
    {
        if(nums[fast] != ' ')
        {
            nums[slow++] = nums [fast];
        }
        fast++;
    }
    nums[slow] = '\0';
    puts(nums);
    return 0;
}




/********** End **********/