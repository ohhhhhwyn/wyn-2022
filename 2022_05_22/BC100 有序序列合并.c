
#include <stdio.h>
int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n], arr2[m];
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr1[i]);
    for(int i = 0; i < m; ++i)
        scanf("%d", &arr2[i]);
    int ans[n + m];
    int curr1 = 0, curr2 = 0;
    int k = 0;
    while(curr1 < n && curr2 < m)
    {
        if(arr1[curr1] < arr2[curr2])
            ans[k++] = arr1[curr1++];
        else
            ans[k++] = arr2[curr2++];
    }
    while(curr2 < m)
        ans[k++] = arr2[curr2++];
    while(curr1 < n)
        ans[k++] = arr1[curr1++];
    for(int i = 0; i < k; ++i)
        printf("%d ", ans[i]);
    return 0;
}