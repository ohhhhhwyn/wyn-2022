#define _CRT_SECURE_NO_WARNINGS
//#include "stdio.h"
//#include "string.h"
//
//int main()
//{
//	//char s[80];
//	//int i, j;
//
//	//scanf("%s", s);
//	//printf("The original string: \n");
//	//puts(s);
//
//	///***** 以下一行有错误 *****/
//	//for (i = j = 0; str[i] != '\0'; i++)
//	//{
//	//	if (s[i] != 'c')
//
//	//		/***** 以下一行有错误 *****/
//	//		s[j] = s[i];
//
//	//}
//
//	///***** 以下一行有错误 *****/
//	//s[i] = '\0';
//
//	//printf("The string after deleted: \n");
//	//puts(s);
//	int i, j;
//	i = j = 10;
//
//	return 0;
//}
//#include<stdio.h>
//#include "string.h"
//int main()
//{
//    char nums[30] = { 0 };
//    gets(nums);
//    int fast = 0;
//    int slow = 0;
//    while (nums[fast] != '\0')
//    {
//        if (nums[fast] != ' ')
//        {
//            nums[slow++] = nums[fast];
//        }
//        fast++;
//    }
//    nums[slow] = '\0';
//    puts(nums);
//    return 0;
//}
//#include "stdio.h"
//#include "string.h"
//
//int main()
//{
//	char s[80];
//	int i, j;
//
//	scanf("%s", s);
//	printf("The original string: \n");
//	puts(s);
//
//	/***** 以下一行有错误 *****/
//	for (i = j = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] != 'c')
//
//			/***** 以下一行有错误 *****/
//			s[j++] = s[i];
//
//	}
//
//	/***** 以下一行有错误 *****/
//	s[j] = '\0';
//
//	printf("The string after deleted: \n");
//	puts(s);
//
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char nums[20] = { 'A','A','B','B','C','C','D','D','E','E','F','F','\0'};
//    int fast = 0;
//    int slow = 0;
//    while(nums[fast] != '\0')
//    {
//        if (fast % 2 != 0 || nums[fast] % 2 == 0)
//        {
//            nums[slow++] = nums[fast];
//        }
//        fast++;
//    }
//    nums[slow] = '\0';
//    puts(nums);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	char s1[10] = { 0 };
//	char s2[10] = { 0 };
//	int max = 0;
//	int k = 0;
//	while (k < N)
//	{
//		scanf("%s", s1);
//		int count = 0;
//		for (int i = 0; s1[i] != '\0'; i++)
//		{
//			count++;
//		}
//		if (max <= count)
//		{
//			max = count;
//			for (int i = 0; i < count; i++)
//			{
//				s2[i] = s1[i];
//			}
//		}
//		k++;
//	}
//	puts(s2);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char* nums[9] = { 0 };
//	for (int i = 0; i < 9; i++)
//	{
//		nums[i] = (char*)malloc(sizeof(char) * 7);
//		scanf("%s", nums[i]);
//	}
//	printf("排序前的字符串：\n");
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%s\n", nums[i]);
//	}
//	for (int i = 0; i < 9 - 1; i++)
//	{
//		int MinIndex = i;
//		for (int j = i + 1; j < 9; j++)
//		{
//			if (nums[MinIndex][0] >= nums[j][0])
//			{
//				MinIndex = j;
//			}
//		}
//		char* tmp = nums[MinIndex];
//		nums[MinIndex] = nums[i];
//		nums[i] = tmp;
//	}
//	printf("排序后的字符串：\n");
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%s\n", nums[i]);
//	}
//	free(nums);
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
	char nums[9][7] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		scanf("%s", nums[i]);
	}
	printf("排序前的字符串：\n");
	for (int i = 0; i < 9; i++)
	{
		printf("%s", nums[i]);
		printf("\n");
	}
	//排序
	for (int i = 0; i < 9 - 1; i++)
	{
		int MinIndex = i;
		for (int j = i + 1; j < 9; j++)
		{
			/*if (nums[MinIndex][0] >= nums[j][0])
			{
				MinIndex = j;
			}*/
			if (strcmp(nums[MinIndex], nums[j]) >= 0)
			{
				MinIndex = j;
			}
		}
		for (int k = 0; k < 7; k++)
		{
			char tmp = nums[MinIndex][k];
			nums[MinIndex][k] = nums[i][k];
			nums[i][k] = tmp;
		}
	}
	printf("排序后的字符串：\n");
	for (int i = 0; i < 9; i++)
	{
		printf("%s", nums[i]);
		printf("\n");
	}
	return 0;
}
