#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int arr1[2];
    int arr2[2];
    for (int i = 0; i < 2; ++i)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 2; ++i)
    {
        scanf("%d", &arr2[i]);
    }
    int ans[4];
    int curr1 = 0;
    int curr2 = 0;
    int k = 0;
    while (curr1 < 2 && curr2 < 2)
    {
        if (arr1[curr1] < arr2[curr2])
        {
            ans[k++] = arr1[curr1++];
        }
        else
        {
            ans[k++] = arr2[curr2++];
        }
    }
    while (curr2 < 2)
    {
        ans[k++] = arr2[curr2++];
    }
    while (curr1 < 2)
    {
        ans[k++] = arr1[curr1++];
    }
    for (int i = 0; i < k; ++i)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}