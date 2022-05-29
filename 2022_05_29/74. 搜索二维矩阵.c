bool binarySearchRow(int* row, int rowSize, int target){
    int left = 0, right = rowSize - 1;
    while(left <= right){
        int mid = left + ((right - left) >> 1);
        if(target < row[mid]){
            right = mid - 1;
        }
        else if(target > row[mid]){
            left = mid + 1;
        }
        else{
            return true;
        }
    }
    return false;
}
int binarySearchCol(int** matrix, int matrixSize, int target){
    int up = 0, down = matrixSize - 1;
    while(up <= down){
        int mid = up + ((down - up) >> 1);
        if(target < matrix[mid][0]){
            down = mid - 1;
        }
        else{
            up = mid + 1;
        }
    }
    return down;
}
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int rowIndex = binarySearchCol(matrix, matrixSize, target);
    if(rowIndex < 0){
        return false;
    }
    return binarySearchRow(matrix[rowIndex], matrixColSize[rowIndex], target);
}