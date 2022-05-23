int lengthOfLastWord(char * s){
    int right = strlen(s) - 1;
    int length = 0;
    while(right >= 0)
    {
        if(s[right] != ' ')
        {
            ++length;
            if(0 == right || ' ' == s[right - 1])
            {
                break;
            }
        }
        --right;
    }
    return length;
}