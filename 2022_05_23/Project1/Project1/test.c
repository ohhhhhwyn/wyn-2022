#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//char* longestCommonPrefix(char** strs, int strsSize) {
//    for (int col = 0; col < strlen(strs[0]); ++col)
//    {
//        for (int row = 1; row < strsSize; ++row)
//        {
//            if (strs[0][col] != strs[row][col])
//            {
//                strs[0][col] = '\0';
//                break;
//            }
//        }
//    }
//    return strs[0];
//}
//int main()
//{
//    char arr[3][10] = { "abc", "abc", "ab" };
//    char* ret = longestCommonPrefix(arr, 3);
//    printf("%s\n", ret);
//    return 0;
//}
#include <stdio.h>
int main()
{
	int a = 1;
	int* p = &a;
	printf("%p\n", p);
	return 0;
}