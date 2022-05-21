#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void reserve(char* string, int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = string[left];
//		string[left++] = string[right];
//		string[right--] = tmp;
//	}
//}
//int main()
//{
//	char string[1000] = { 0 };
//	gets(string);
//	int length = strlen(string);
//	int left = 0;
//	int right = 0;
//	for (int i = 0; i <= length; ++i)
//	{
//		if (string[i] == ' ' || string[i] == '\0')
//		{
//			right = i - 1;
//			reserve(string, left, right);
//			left = i + 1;
//		}
//	}
//	reserve(string, left, right);
//	printf("%s\n", string);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (~scanf("%d %d", &a, &b))
//	{
//		int max = a > b ? a : b;
//		for (int i = max; i <= a * b; ++i)
//		{
//			if (i % a == 0 && i % b == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (~scanf("%d %d", &a, &b))
//	{
//		for (int i = 1; i <= b; ++i)
//		{
//			if ((a * i) % b == 0)
//			{
//				printf("%d\n", a * i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (~scanf("%d %d", &a, &b))
//	{
//		int mul = a * b;
//		int c = 0;
//		while (b)
//		{
//			c = a % b;
//			a = b;
//			b = c;
//		}
//		printf("%d\n", mul / a);
//	}
//	return 0;
//}
//#include <stdio.h>
//int removeDuplicates(int* nums, int numsSize) {
//    int slow = 0;
//    int fast = 0;
//    while (fast < numsSize)
//    {
//        if (nums[slow] != nums[fast])
//        {
//            nums[++slow] = nums[fast];
//        }
//        ++fast;
//    }
//    return slow + 1;
//}
//int main()
//{
//    int nums[] = { 1, 1, 2 };
//    int size = sizeof(nums) / sizeof(nums[0]);
//    int ret = removeDuplicates(nums, size);
//    printf("%d\n", ret);
//    return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* palindrome(char* s, int left, int right)
{
    while (left >= 0 && right < strlen(s) && s[left--] == s[right++]);
    char* ans = (char*)malloc(sizeof(char) * (right - left));
    int i = 0;
    while (left < right - 1)
    {
        ans[i++] = s[++left];
    }
    ans[i] = '\0';
    return ans;
}
char* longestPalindrome(char* s) {
    char* ans = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    ans[0] = '\0';
    for (int i = 0; i < strlen(s); ++i)
    {
        char* s1 = palindrome(s, i, i);
        char* s2 = palindrome(s, i, i + 1);
        if (strlen(ans) < strlen(s1))
        {
            strcpy(ans, s1);
        }
        if (strlen(ans) < strlen(s2))
        {
            strcpy(ans, s2);
        }
    }
    return ans;
}
int main()
{
    char* s = "babad";
    char* ret = longestPalindrome(s);
    printf("%s\n", ret);
    return 0;
}