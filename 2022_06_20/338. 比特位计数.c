/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    *returnSize = n + 1;
    int* ans = (int*)malloc(sizeof(int) * (*returnSize));
    for(int i = 0; i <= n; i++){
        int tmp = i;
        int count = 0;
        while(tmp){
            tmp = tmp & (tmp - 1);
            count++;
        }
        ans[i] = count;
    }
    return ans;
}