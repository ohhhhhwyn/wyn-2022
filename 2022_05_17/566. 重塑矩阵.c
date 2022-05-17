/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    int m = matSize;
    int n = matColSize[0];
    if(m * n != r * c)
    {
        *returnSize = matSize;
        *returnColumnSizes = matColSize;
        return mat;
    }
    *returnSize = r;
    *returnColumnSizes = malloc(sizeof(int) * r);
    int** newmat = malloc(sizeof(int*) * r);
    for(int i = 0; i < r; ++i)
    {
        (*returnColumnSizes)[i] = c;
        newmat[i] = malloc(sizeof(int) * c);
    }
    for(int x = 0; x < m * n; ++x)
    {
        newmat[x / c][x % c] = mat[x / n][x % n];
    }
    return newmat;
}