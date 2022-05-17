int diagonalSum(int** mat, int matSize, int* matColSize){
    int sum = 0;
    for(int i = 0; i < matSize; ++i)
    {
        sum += mat[i][i] + mat[i][matColSize[i] - 1 - i];
    }
    return sum - mat[matSize / 2][matSize / 2] * (matSize & 1);
}