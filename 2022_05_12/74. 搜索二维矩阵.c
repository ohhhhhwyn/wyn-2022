int binarySearchCol(int** matrix, int matrixSize, int target)
{
    int ret = 0;
    int up = 0;
    int down = matrixSize - 1;
    while(up <= down)
    {
        int mid = up + ((down - up) >> 1);
        if(target < matrix[mid][0])
        {
            down = mid - 1;
        }
        else if(target >= matrix[mid][0])
        {
            up = mid + 1;
            ret = mid;
        }
    }
    return ret;
}
bool binarySearchRow(int* row, int rowSize, int target)
{
    int left = 0;
    int right = rowSize - 1;
    while(left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if(target < row[mid])
        {
            right = mid - 1;
        }
        else if(target > row[mid])
        {
            left = mid + 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int rowIndex = binarySearchCol(matrix, matrixSize, target);
    if(rowIndex < 0)
    {
        return false;
    }
    return binarySearchRow(matrix[rowIndex], matrixColSize[rowIndex], target);
}