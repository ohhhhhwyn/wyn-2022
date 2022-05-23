char * longestCommonPrefix(char ** strs, int strsSize){
    for(int col = 0; col < strlen(strs[0]); ++col)
    {
        for(int row = 1; row < strsSize; ++row)
        {
            if(strs[0][col] != strs[row][col])
            {
                strs[0][col] = '\0';
                break;
            }
        }
    }
    return strs[0];
}