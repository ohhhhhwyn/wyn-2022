/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int guessNumber(int n){
	int left = 1;
    int right = n;
    while(left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if(-1 == guess(mid))
        {
            right = mid - 1;
        }
        else if(1 == guess(mid))
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return left;
}