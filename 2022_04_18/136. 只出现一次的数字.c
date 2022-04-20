int singleNumber(int* nums, int numsSize){
    //方法一，暴力法
    /*
    int i,j,ret;
    for (i = 0; i < numsSize; i++) {
		for (j = 0; j < numsSize; j++) {
			if (nums[i] == nums[j] && j != i)
				break;
		}
		if (j == numsSize)
			ret = nums[i];
	}
    return ret;
    */
    //方法二，异或法
    int ret=0;
    for(int i=0;i<numsSize;i++){
        ret^=nums[i];
    }
    return ret;
}