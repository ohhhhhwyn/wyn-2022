char * interpret(char * command){
    int length = strlen(command);
    char* ans = (char*)malloc(sizeof(char) * (length + 1));
    int k = 0;
    int i = 0;
    while(i < length)
    {
        if('G' == command[i])
        {
            ans[k++] = 'G';
            ++i;
        }
        else if('(' == command[i] && ')' == command[i + 1])
        {
            ans[k++] = 'o';
            i += 2;
        }
        else if('(' == command[i] && 'a' == command[i + 1])
        {
            ans[k++] = 'a';
            ans[k++] = 'l';
            i += 4;
        }
    }
    ans[k] = '\0';
    return ans;
}