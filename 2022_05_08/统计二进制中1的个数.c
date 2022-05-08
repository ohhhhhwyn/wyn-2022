int NumberOf1(int n ) {
    int sum = 0;
    for(int i = 0; i < 32; ++i)
    {
        sum += (n >> i) & 1;
    }
    return sum;
	
}