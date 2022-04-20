void reserve(int *nums,int left,int right){
    while(left<=right){
        int tmp=nums[left];
        nums[left++]=nums[right];
        nums[right--]=tmp;
    }
}
void rotate(int* nums, int numsSize, int k){
    //方法一，创建临时数组
    /*
    int tmp[numsSize];
    for(int i=0;i<numsSize;i++){
        tmp[i]=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        nums[(i+k)%numsSize]=tmp[i];
    }
    */
    //方法二，三次反转
    k%=numsSize;
    reserve(nums,0,numsSize-1);
    reserve(nums,0,k-1);
    reserve(nums,k,numsSize-1);
	
}