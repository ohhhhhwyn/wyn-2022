bool areAlmostEqual(char * s1, char * s2){
    int len = strlen(s1);
    int i;
    int cnt = 0;
    char c1, c2;
    for(int i = 0; i < len; ++i)
    {
        if(s1[i] == s2[i])
        {
            continue;
        }
        if(cnt == 0)
        {
            c1 = s1[i];
            c2 = s2[i];
        }
        else if(cnt == 1)
        {
            if(c1 != s2[i] || c2 != s1[i])
            {
                return false;
            }
        }
        else if(cnt == 2)
        {
            return false;
        }
        ++cnt;
    }
    return cnt != 1;
}