int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int max = INT_MIN;
    for(int i = 0; i < accountsSize; ++i)
    {
        int sum = 0;
        for(int j = 0; j < accountsColSize[i]; ++j)
        {
            sum += accounts[i][j];
        }
        if(max < sum)
        {
            max = sum;
        }
    }
    return max;
}