/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    //方法一，递推
    /*
    *returnSize=rowIndex+1;
    int *ret[rowIndex+1];
    for(int i=0;i<=rowIndex;i++){
        ret[i]=malloc(sizeof(int)*(i+1));
        ret[i][0]=ret[i][i]=1;
        for(int j=1;j<i;j++){
            ret[i][j]=ret[i-1][j-1]+ret[i-1][j];
        }
    }
    return ret[rowIndex];
    */
    //优化一：滚动数组->两个数组
    /*
    *returnSize=rowIndex+1;
    int *p1=malloc(sizeof(int)*(*returnSize));
    memset(p1,0,sizeof(int)*(*returnSize));
    int *p2=malloc(sizeof(int)*(*returnSize));
    memset(p1,0,sizeof(int)*(*returnSize));
    for(int i=0;i<=rowIndex;i++){
        p1[0]=p1[i]=1;
        for(int j=1;j<i;j++){
            p1[j]=p2[j-1]+p2[j];
        }
        int* tmp=p1;
        p1=p2;
        p2=tmp;
    }
    return p2;
    */
    //优化二：滚动数组->一个数组
    /*
    *returnSize=rowIndex+1;
    int *p=malloc(sizeof(int)*(*returnSize));
    memset(p,0,sizeof(int)*(*returnSize));
    p[0]=1;
    for(int i=1;i<=rowIndex;i++){
        for(int j=i;j>0;j--){
            p[j]+=p[j-1];
        }
    }
    return p;
    */
    //方法二，线性递推
    *returnSize=rowIndex+1;
    int *p=malloc(sizeof(int)*(*returnSize));
    p[0]=1;
    for(int i=1;i<=rowIndex;i++){
            p[i]=1LL*p[i-1]*(rowIndex-i+1)/i;
    }
    return p;
	
}


