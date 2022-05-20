bool isAlienSorted(char ** words, int wordsSize, char * order){
    int index[26];
    for(int i = 0; i < strlen(order); ++i)
    {
        index[order[i] - 'a'] = i;
    }
    for(int i = 1; i < wordsSize; ++i)
    {
        bool valid = false;
        int length1 = strlen(words[i - 1]);
        int length2 = strlen(words[i]);
        int length_min = length1 < length2 ? length1 : length2;
        for(int j = 0; j < length_min; ++j)
        {
            int prev = index[words[i - 1][j] - 'a'];
            int curr = index[words[i][j] - 'a'];
            if(prev < curr)
            {
                valid = true;
                break;
            }
            else if(prev > curr)
            {
                return false;
            }
        }
        if(!valid)
        {
            if(length1 > length2)
            {
                return false;
            }
        }
    }
    return true;
}