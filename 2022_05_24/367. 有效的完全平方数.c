bool isPerfectSquare(int num){
   /* 
   for(long i = 1; i * i <= num; ++i)
   {
       if(num == i * i)
       {
           return true;
       }
   }
   return false;
   */
   int left = 0;
   int right = num;
   while(left <= right)
   {
        int mid = left + ((right - left) >> 1);
        if(num < (long)mid * mid)
        {
            right = mid - 1;
        }
        else if(num > (long)mid * mid)
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