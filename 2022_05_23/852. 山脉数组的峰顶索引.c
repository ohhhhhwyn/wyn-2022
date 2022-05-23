int peakIndexInMountainArray(int* arr, int arrSize){
    int left = 0;
    int right = arrSize - 1;
    while(left  <= right)
    {
        int mid = left + ((right - left) >> 1);
        if(arr[left] < arr[mid])
        {
            left++;
        }
        else if(arr[right] < arr[mid])
        {
            right--;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}