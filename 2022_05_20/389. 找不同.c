char findTheDifference(char * s, char * t){
    char ans = 0;
    int i = 0;
    while(s[i] != 0 && t[i] != 0)
    {
        ans ^= s[i];
        ans ^= t[i];
        ++i;
    }
    if(s[i] == '\0')
    {
        ans ^= t[i];
    }
    else
    {
        ans ^= s[i];
    }
    return ans;
}