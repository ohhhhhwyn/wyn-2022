int findKthPositive(int* arr, int arrSize, int k){
    if(arr[0] > k){
        return k;
    }
    int left = 0;
    int right = arrSize - 1;
    while(left <= right){
        int mid = left + ((right - left) >> 1);
        if(k <= arr[mid] - mid - 1){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return k - (arr[left - 1] - (left - 1) - 1) + arr[left - 1];
}