

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    /*
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    ans[0] = -1, ans[1] = -1;
    for(int i = 0; i < numbersSize - 1; i++){
        int left = i + 1, right = numbersSize - 1;
        while(left <= right){
            int mid = left + ((right - left) >> 1);
            if(target < numbers[i] + numbers[mid]){
                right = mid - 1;
            }
            else if(target > numbers[i] + numbers[mid]){
                left = mid + 1;
            }
            else{
                ans[0] = i + 1, ans[1] = mid + 1;
                return ans;
            }
        }
    }
    return ans;
    */
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    ans[0] = -1, ans[1] = -1;
    int left = 0, right = numbersSize - 1;
    while(left < right){
        int sum = numbers[left] + numbers[right];
        if(target < sum){
            right--;
        }
        else if(target > sum){
            left++;
        }
        else{
            ans[0] = left + 1;
            ans[1] = right + 1;
            break;
        }
    }
    return ans;
}