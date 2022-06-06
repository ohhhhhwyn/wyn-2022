int thirdMax(int* nums, int numsSize){
    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;
    for(int i = 0; i < numsSize; i++){
        if(first < nums[i]){
            third = second;
            second = first;
            first = nums[i];
        }
        else if(second < nums[i] && nums[i] < first){
            third = second;
            second = nums[i];
        }
        else if(third < nums[i] && nums[i] < second){
            third = nums[i];
        }
    }
    return third == LONG_MIN ? first : third;
}
/*
int cmp(const void* e1, const void* e2){
    return *(int*)e1 < *(int*)e2;
}
int thirdMax(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    if(numsSize >= 3){
        int count = 0;
        for(int i = 1; i < numsSize; i++){
            if(nums[i - 1] != nums[i]){
                count++;
            }
            if(2 == count){
                return nums[i];
            }
        }
    }
    return nums[0];
}
*/
/*
int thirdMax(int* nums, int numsSize){
    for(int i = 0; i < numsSize - 1; i++){
        int flag = 1;
        for(int j = 0; j < numsSize - 1 - i; j++){
            if(nums[j] < nums[j + 1]){
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
                flag = 0;
            }
        }
        if(1 == flag){
            break;
        }
    }
    if(numsSize >= 3){
        int count = 0;
        for(int i = 1; i < numsSize; i++){
            if(nums[i - 1] != nums[i]){
                count++;
            }
            if(2 == count){
                return nums[i];
            }
        }
    }
    return nums[0];
}
*/