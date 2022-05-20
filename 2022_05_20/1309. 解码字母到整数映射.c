char * freqAlphabets(char * s){
    char *res= (char*)malloc(sizeof(char) * (strlen(s) + 1));
    int idx = 0;
    for(int i = 0; i < strlen(s);)
    {
        if(i + 2 < strlen(s) && s[i + 2] == '#')
        {
            res[idx++] = ((s[i] - '0') * 10 + s[i + 1] - '1') + 'a';
            i += 3; 
        }
        else
        {
            res[idx++] = (s[i] - '1') + 'a';
            i++;
        }
    }
    res[idx] = '\0';
    return res;
}
