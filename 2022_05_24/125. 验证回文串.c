bool isPalindrome(char * s){
    int left = 0;
    int right = strlen(s) - 1;
    while(left < right)
    {
        //!isalnum(s[left])
        while(left < right && !((s[left] >= 65 && s[left] <= 90) || (s[left] >= 97 && s[left] <= 122) || (s[left] >= 48 && s[left] <= 57)))
        {
            ++left;
        }
        //!isalnum(s[right])
        while(left < right && !((s[right] >= 65 && s[right] <= 90) || (s[right] >= 97 && s[right] <= 122) || (s[right] >= 48 && s[right] <= 57)))
        {
            --right;
        }
        //tolower(s[left])
        if(s[left] >= 97 && s[left] <= 122)
        {
            s[left] -= 32;
        }
        //tolower(s[right])
        if(s[right] >= 97 && s[right] <= 122)
        {
            s[right] -= 32;
        }
        if(s[left++] != s[right--])
        {
            return false;
        }
    }
    return true;
}