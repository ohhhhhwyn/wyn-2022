void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int p = nums1Size - 1, p1 = m - 1, p2 = n - 1;
    int tmp = 0;
    while(p1 >= 0 || p2 >=0)
    {
        if(p1 == -1)
        {
            tmp = nums2[p2--];
        }
        else if(p2 == -1)
        {
            tmp = nums1[p1--];
        }
        else if(nums1[p1] > nums2[p2])
        {
            tmp = nums1[p1--];
        }
        else 
        {
            tmp = nums2[p2--];
        }
        nums1[p--] = tmp;
    }
}