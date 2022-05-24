int cmp (const void* _a, const void* _b)
{
    return (*(int*)_a) - (*(int*)_b);
}
int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d){
    qsort(arr2, arr2Size, sizeof(int), cmp);
    int ans = 0;
    for(int i = 0; i < arr1Size; ++i)
    {
        int left = 0;
        int right = arr2Size - 1;
        while(left <= right)
        {
            int mid = left + ((right - left) >> 1);
            if(arr1[i] <= arr2[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        left = (left > arr2Size - 1) ? (arr2Size - 1) : left;
        right = (right < 0) ? 0 : right;
        if((d < abs(arr2[left] - arr1[i])) && (d < abs(arr2[right] - arr1[i])))
        {
            ++ans;
        }
    }
    return ans;
}