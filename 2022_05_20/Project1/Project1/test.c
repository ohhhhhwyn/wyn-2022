#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
char* mergeAlternately(char* word1, char* word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char* ans = malloc(sizeof(char) * (len1 + len2 + 1));
    int p1 = 0, p2 = 0;
    int k = 0;
    while (p1 < len1 || p2 < len2)
    {
        while (p1 < len1 && p2 < len2)
        {
            ans[k++] = word1[p1++];
            ans[k++] = word2[p2++];
        }
        if (p1 == len1 && p2 < len2)
        {
            ans[k++] = word2[p2++];
        }
        if (p2 == len2 && p1 < len1)
        {
            ans[k++] = word1[p1++];
        }
    }
    ans[k] = '\0';
    return ans;
}
int main()
{
    char* word1 = "abc";
    char* word2 = "pqr";
    char* ret = mergeAlternately(word1, word2);
    printf("%s\n", ret);
	return 0;
}
*/
//char* freqAlphabets(char* s) {
//    int length = strlen(s);
//    char* ans = (char*)malloc(sizeof(char) * (length + 1));
//    int i = 0;
//    int k = 0;
//    while (i < length)
//    {
//        if ('#' == s[i + 2])
//        {
//            int tmp = (s[i] - '0') * 10 + s[i + 1] - '0';
//            ans[k++] = 'a' + tmp - 1;
//            i += 3;
//        }
//        else
//        {
//            int tmp = s[i] - '0';
//            ans[k++] = 'a' + tmp - 1;
//            ++i;
//        }
//    }
//    ans[k] = '\0';
//    return ans;
//}
char* freqAlphabets(char* s) {
    int length = strlen(s);
    char* res = (char*)malloc(sizeof(char) * (length + 1));
    int idx = 0;
    for (int i = 0; i < length;)
    {
        if (i + 2 < length && s[i + 2] == '#')
        {
            res[idx++] = ((s[i] - '0') * 10 + s[i + 1] - '1') + 'a';
            i += 3;
        }
        else
        {
            res[idx++] = (s[i] - '1') + 'a';
            i++;
        }
    }
    res[idx] = '\0';
    return res;
}

int main()
{
    char arr[] = "10#11#12";
    char* ret = freqAlphabets(arr);
    printf("%s\n", ret);
    return 0;
}
