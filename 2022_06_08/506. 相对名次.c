/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* e1, const void* e2){
    return ((int*)e1)[0] > ((int*)e2)[0];
}
char ** findRelativeRanks(int* score, int scoreSize, int* returnSize){
    int arr[scoreSize][2];
    for(int i = 0; i < scoreSize; i++){
       arr[i][0] = -score[i];
       arr[i][1] = i;
    }
    qsort(arr, scoreSize, sizeof(arr[0]), cmp);
    char* str[] = { "Gold Medal", "Silver Medal", "Bronze Medal" };
    char** ans = (char**)malloc(sizeof(char*) * scoreSize);
    for(int i = 0; i < scoreSize; i++){
        if(i < 3){
            ans[arr[i][1]] = str[i];
        }
        else{
            ans[arr[i][1]] = (char*)malloc(sizeof(char) * 8);
            sprintf(ans[arr[i][1]], "%d", i + 1);
        }
    }
    *returnSize = scoreSize;
    return ans;
}