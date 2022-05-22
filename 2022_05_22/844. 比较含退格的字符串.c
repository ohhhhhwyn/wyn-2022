bool backspaceCompare(char * s, char * t){
    /*
    int len1 = strlen(s), len2 = strlen(t);
    int arr1[len1], arr2[len2];
    int k1 = 0, k2 = 0;
    for(int i = 0; i < len1; ++i)
    {
        if('#' != s[i])
        {
            arr1[k1++] = s[i];
        }
        else if(k1 > 0)
        {
            --k1;
        }
    }
    for(int i = 0; i < len2; ++i)
    {
        if('#' != t[i])
        {
            arr2[k2++] = t[i];
        }
        else if(k2 > 0)
        {
            --k2;
        }
    }
    if(k1 != k2)
    {
        return false;
    }
    for(int i = 0; i < k1; ++i)
    {
        if(arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
    */
    int i = strlen(s) - 1;
    int j = strlen(t) - 1;
    int skipS = 0;
    int skipT = 0;
    while(i >=0 || j >= 0)
    {
        while(i >= 0)
        {
            if('#' == s[i])
            {
                ++skipS;
                --i;
            }
            else if(skipS > 0)
            {
                --skipS;
                --i;
            }
            else
            {
                break;
            }
        }
        while(j >= 0)
        {
            if('#' == t[j])
            {
                ++skipT;
                --j;
            }
            else if(skipT > 0)
            {
                --skipT;
                --j;
            }
            else
            {
                break;
            }
        }
        if(i >= 0 && j >= 0)
        {
            if(s[i] != t[j])
            {
                return false;
            }
        }
        else
        {
            if(i >= 0 || j >= 0)
            {
                return false;
            }
        }
        --i;
        --j;
    }
    return true;
}