bool areAlmostEqual(char * s1, char * s2){
    int cnt = 0;
    char c1 = '0';
    char c2 = '0';
    for(int i = 0; s1[i] != '\0'; ++i)
    {
        if(s1[i] == s2[i])
        {
            continue;
        }
        else if(cnt == 0)
        {
            c1 = s1[i];
            c2 = s2[i];
        }
        else
        {
            if(c1 != s2[i] || c2 != s1[i])
            {
                return false;
            }
        }
        ++cnt;
    }
    if(cnt == 0 || cnt == 2)
    {
        return true;
    }
    return false;
}