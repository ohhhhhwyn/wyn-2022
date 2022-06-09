int NumberOf1(int n ) {
    // write code here
    int count = 0;
    while(n){
        n &= (n - 1);
        count++;
    }
    return count;
}