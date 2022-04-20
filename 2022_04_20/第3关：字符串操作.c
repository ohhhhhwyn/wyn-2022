
/********** Begin **********/
#include<stdio.h>
#include<string.h>
int main()
{
    char nums[20] = { 0 };
    scanf("%s",nums);
    int fast = 0;
    int slow = 0;
    while(nums[fast] != '\0')
    {
        if (fast % 2 != 0 || nums[fast] % 2 == 0)
        {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    nums[slow] = '\0';
    puts(nums);
    return 0;
}




/********** End **********/