int search(int* nums, int numsSize, int target){
    int left=0,right=numsSize-1;
    while(left<=right){
        int mid=((right-left)>>1)+left;
        if(target<nums[mid])
            right=mid-1;
        else if(target>nums[mid])
            left=mid+1;
        else
            return mid;
    }
    return -1;
}