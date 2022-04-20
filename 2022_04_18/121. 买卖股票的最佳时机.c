int maxProfit(int* prices, int pricesSize){
    //方法一，暴力法，会超时
    /*
    int max=INT_MIN;
    for(int i=0;i<pricesSize;i++){
        for(int j=i+1;j<pricesSize;j++){
            if(max<(prices[j]-prices[i])){
                max=prices[j]-prices[i];
            }
        }
    }
    if(max>0)
        return max;
    else
        return 0;
    */
    //方法二，一次遍历
	int max = INT_MIN, min = INT_MAX;
	for (int i = 1; i < pricesSize; i++) {
		if (min > prices[i - 1]) 
			min = prices[i - 1];
		if (max < (prices[i] - min)) 
			max = prices[i] - min;
	}
	if (max > 0)
		return max ;
	else
		return 0;
}