int maxSubArray(int* nums, int numsSize) {
    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        max = max > sum ? max : sum;
        if (sum < 0) {
            sum = 0;
        }
    }
    return max;
}