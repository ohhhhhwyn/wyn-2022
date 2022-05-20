char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char* ans = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
    int p1 = 0, p2 = 0;
    int k = 0;
    while(p1 < len1 || p2 < len2)
    {
        while(p1 < len1 && p2 < len2)
        {
            ans[k++] = word1[p1++];
            ans[k++] = word2[p2++];
        }
        if(p1 == len1 && p2 < len2)
        {
            ans[k++] = word2[p2++];
        }
        if(p2 == len2 && p1 < len1)
        {
            ans[k++] = word1[p1++];
        }
    }
    ans[k] = '\0';
    return ans;
}