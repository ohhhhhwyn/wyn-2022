/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int num=0;
    for(int i=digitsSize-1;i>=0;i--){
        if(9==digits[i]){
            digits[i]=0;
            num++;
        }
        else{
            digits[i]+=1;
            break;
        }
    }
    *returnSize=digitsSize;
    if(digitsSize==num){
        int *p=(int*)malloc(sizeof(int)*(digitsSize+1));
        p[0]=1;
        for(int i=1;i<digitsSize+1;i++){
            p[i]=0;
        }
        *returnSize=digitsSize+1;
        return p;
    }
    else{
        return digits;
    }
}