char * toLowerCase(char * s){
    int length = strlen(s);
    char* ans = (char*)malloc(sizeof(char) * (length + 1));
    for(int i = 0; i < length; ++i)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            ans[i] = s[i] + 32;
        }
        else
        {
            ans[i] = s[i];
        }
    }
    ans[length] = '\0';
    return ans;
}