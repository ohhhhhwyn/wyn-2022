#include<stdio.h>
#include<stdlib.h>
int my_strlen(char* nums)
{
	if (nums[0] == '\0')
	{
		return 0;
	}
	return 1 + my_strlen(nums + 1);
}
void reverse_string(char* nums)
{
	int numsSize = my_strlen(nums);
	char tmp = *nums;
	*nums = *(nums + numsSize - 1);
	*(nums + numsSize - 1) = '\0';
	if (my_strlen(nums+1) >= 2)
	{
		reverse_string(nums + 1);
	}
	*(nums + numsSize - 1) = tmp;
}
int main()
{
	char nums[] = "abcdef";
	printf("before:%s\n", nums);
	reverse_string(nums);
	printf("after :%s\n", nums);
	return 0;
}