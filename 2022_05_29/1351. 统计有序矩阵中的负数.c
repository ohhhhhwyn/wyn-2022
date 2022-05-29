int binarySearch(int* row, int rowSize){
    int left = 0, right = rowSize - 1;
    while(left <= right){
        int mid = left + ((right - left) >> 1);
        if(0 > row[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return rowSize - left;
}
int countNegatives(int** grid, int gridSize, int* gridColSize){
    int ans = 0;
    for(int i = 0; i < gridSize; i++){
        ans += binarySearch(grid[i], gridColSize[i]);
    }
    return ans;
}