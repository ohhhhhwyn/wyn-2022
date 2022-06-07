#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int cmp(const void* e1, const void* e2) {
    return (*(int*)e1 > *(int*)e2);
}
int findContentChildren(int* g, int gSize, int* s, int sSize) {
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    int ans = 0;
    int gi = 0, si = 0;
    while (gi < gSize && si < sSize) {
        if (g[gi] < s[si]) {
            gi++;
        }
        else if (g[gi] > s[si]) {
            si++;
        }
        else {
            gi++;
            si++;
            ans++;
        }
    }
    return ans;
}
int main()
{
	int g[] = { 1,2,3 };
	int s[] = { 1,2,3 };
	int gSize = sizeof(g) / sizeof(g[0]);
	int sSize = sizeof(s) / sizeof(s[0]);
    int ret = findContentChildren(g, gSize, s, sSize);
    printf("%d\n", ret);
	system("pause");
	return 0;
}