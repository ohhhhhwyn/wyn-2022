int Sumofsquares(int num)
{
    int sum = 0;
    while(num)
    {
        sum += (num % 10) * (num % 10);
        num /= 10;
    }
    return sum;
}
bool isHappy(int n){
   int slow = n;
   int fast = n;
   do
   {
       slow = Sumofsquares(slow);
       fast = Sumofsquares(fast);
       fast = Sumofsquares(fast);
   }while(slow != fast);
   return slow == 1;
}